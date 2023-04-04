#include "exam1.h"

//strcpy_s
//(���� ���� �ּ�, ���� ũ��, ���� ���� �ּ�)

typedef struct{
	int id;
	char name[20];
	char phone[20];
}Member;

#define MEMBER_SIZE 10
Member members[MEMBER_SIZE] = {
	{10,"ȫ�浿","010-1111-1111"},
	{20,"��浿","010-2222-2222"} 
};

void mem_insert() {
	int _id, idx;
	char _name[20];
	char _phone[20];

	printf("���ϴ� �ε��� �Է� ( 0 ~ %d ) : ",MEMBER_SIZE-1);
	scanf_s("%d", &idx);

	printf("ȸ�� �Է� :");
	scanf_s("%d",&_id);

	char dummy = getchar();

	printf("�̸� �Է� :");
	gets_s(_name, sizeof(_name));

	printf("��ȭ��ȣ �Է� :");
	gets_s(_phone, sizeof(_phone));

	Member mem;
	mem.id = _id;
	strcpy_s(mem.name, sizeof(mem.name), _name);
	strcpy_s(mem.phone, sizeof(mem.phone), _phone);

	members[idx] = mem;
}

void mem_printall() {
	Member mem;

	printf("[��ġ] [ID] [�̸�]  [��ȭ��ȣ]\n");
	for (int i = 0; i < MEMBER_SIZE - 1; i++) {
		mem = members[i];

		printf("[ %d ] %4d  %3s  %5s\n", i , mem.id, mem.name, mem.phone);
	}
}

void mem_print_id() {
	int _id;
	Member mem;

	printf("ID �Է� :");
	scanf_s("%d", &_id);

	for (int i = 0; i < MEMBER_SIZE; i++) {
		mem = members[i];
		if (_id == mem.id) {
			printf("[������ġ] : %d\n", i);
			printf("[ȸ��ID] : %d\n", mem.id);
			printf("[ȸ���̸�] : %s\n", mem.name);
			printf("[��ȭ��ȣ] : %s\n", mem.phone);
			return;
		}
	}
}

void mem_print_name() {
	char _name[20];
	Member mem;

	printf("�̸� �Է� :");
	gets_s(_name, sizeof(_name));

	for (int i = 0; i < MEMBER_SIZE; i++) {
		mem = members[i];
		if (strcmp(mem.name,_name) == 0) {
			printf("[������ġ] : %d\n", i);
			printf("[ȸ��ID] : %d\n", mem.id);
			printf("[ȸ���̸�] : %s\n", mem.name);
			printf("[��ȭ��ȣ] : %s\n", mem.phone);
			return;
		}
	}
}

void mem_update() {
	int _id;
	Member mem;

	printf("ID �Է� :");
	scanf_s("%d", &_id);
	char dummy = getchar();

	for (int i = 0; i < MEMBER_SIZE; i++) {
		mem = members[i];
		if (_id == mem.id) {
			char phone[20];
			printf("������ ��ȭ��ȣ �Է� : ");
			gets_s(phone, sizeof(phone));

			strcpy_s(mem.phone, sizeof(mem.phone), phone);


			members[i] = mem;
			return;
		}
		else {
			printf("����\n");
		}
	}
}

void mem_delete() {
	char _name[20];
	Member mem;

	printf("�̸� �Է� :");
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
