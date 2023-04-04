#include "exam1.h"

//strcpy_s
//(복사 공간 주소, 복사 크기, 복사 원본 주소)

typedef struct{
	int id;
	char name[20];
	char phone[20];
}Member;

#define MEMBER_SIZE 10
Member members[MEMBER_SIZE] = {
	{10,"홍길동","010-1111-1111"},
	{20,"김길동","010-2222-2222"} 
};

void mem_insert() {
	int _id, idx;
	char _name[20];
	char _phone[20];

	printf("원하는 인덱스 입력 ( 0 ~ %d ) : ",MEMBER_SIZE-1);
	scanf_s("%d", &idx);

	printf("회원 입력 :");
	scanf_s("%d",&_id);

	char dummy = getchar();

	printf("이름 입력 :");
	gets_s(_name, sizeof(_name));

	printf("전화번호 입력 :");
	gets_s(_phone, sizeof(_phone));

	Member mem;
	mem.id = _id;
	strcpy_s(mem.name, sizeof(mem.name), _name);
	strcpy_s(mem.phone, sizeof(mem.phone), _phone);

	members[idx] = mem;
}

void mem_printall() {
	Member mem;

	printf("[위치] [ID] [이름]  [전화번호]\n");
	for (int i = 0; i < MEMBER_SIZE - 1; i++) {
		mem = members[i];

		printf("[ %d ] %4d  %3s  %5s\n", i , mem.id, mem.name, mem.phone);
	}
}

void mem_print_id() {
	int _id;
	Member mem;

	printf("ID 입력 :");
	scanf_s("%d", &_id);

	for (int i = 0; i < MEMBER_SIZE; i++) {
		mem = members[i];
		if (_id == mem.id) {
			printf("[저장위치] : %d\n", i);
			printf("[회원ID] : %d\n", mem.id);
			printf("[회원이름] : %s\n", mem.name);
			printf("[전화번호] : %s\n", mem.phone);
			return;
		}
	}
}

void mem_print_name() {
	char _name[20];
	Member mem;

	printf("이름 입력 :");
	gets_s(_name, sizeof(_name));

	for (int i = 0; i < MEMBER_SIZE; i++) {
		mem = members[i];
		if (strcmp(mem.name,_name) == 0) {
			printf("[저장위치] : %d\n", i);
			printf("[회원ID] : %d\n", mem.id);
			printf("[회원이름] : %s\n", mem.name);
			printf("[전화번호] : %s\n", mem.phone);
			return;
		}
	}
}

void mem_update() {
	int _id;
	Member mem;

	printf("ID 입력 :");
	scanf_s("%d", &_id);
	char dummy = getchar();

	for (int i = 0; i < MEMBER_SIZE; i++) {
		mem = members[i];
		if (_id == mem.id) {
			char phone[20];
			printf("수정할 전화번호 입력 : ");
			gets_s(phone, sizeof(phone));

			strcpy_s(mem.phone, sizeof(mem.phone), phone);


			members[i] = mem;
			return;
		}
		else {
			printf("없음\n");
		}
	}
}

void mem_delete() {
	char _name[20];
	Member mem;

	printf("이름 입력 :");
	gets_s(_name, sizeof(_name));

	for (int i = 0; i < MEMBER_SIZE; i++) {
		mem = members[i];
		if (strcmp(mem.name, _name) == 0) {
			mem.id = 0;
			strcpy_s(mem.name, sizeof(mem.name), "");
			strcpy_s(mem.phone, sizeof(mem.phone), "");

			members[i] = mem;
			return;
		}
	}
}


void main() {
	//mem_insert();
	mem_printall();
	//mem_print_id();
	//mem_print_name();
	//mem_update();
	mem_delete();
	mem_printall();
}
