#include "std.h"

typedef struct tagMember
{
	char name[20];
	int att;
	int report;
	int exam1;
	int exam2;
	float result;
}tagmember;

typedef struct Tagmyarr {
	tagmember base[10];
	int max;
	int size;
}tagmyarr;

//수정 안하면 const
void arr_init(tagmyarr* p);
void arr_print(const tagmyarr* p);
int arr_insert(tagmyarr* p, tagmember value);
int arr_select(const tagmyarr* p, const char* value);
int arr_update(tagmyarr* p, const char* name, 
	int exam1, int exam2);
int arr_delete(tagmyarr* p, const char* name);

void exam1() {
	tagmyarr arr;

	arr_init(&arr);
	arr_print(&arr);

	tagmember mem1 = { "홍길동",20,20,20,40 };
	arr_insert(&arr, mem1);

	tagmember mem2 = { "김길동",20,20,10,5 };
	arr_insert(&arr, mem2);


	arr_print(&arr);

	int idx = arr_select(&arr, "김길동");
	if (idx != -1) {
		printf("검색결과 : %s, %s\n",
			arr.base[idx].name,
			(arr.base[idx].result >= 60) ? "P" : "F");
	}

	arr_update(&arr, "홍길동", 15, 35);
	arr_print(&arr);

	arr_delete(&arr, "김길동");
	arr_print(&arr);
	return 0;
}

void file_save(tagmyarr p);
void file_load(tagmyarr* p);

void exam2() {
	tagmyarr arr;
	arr_init(&arr);

	file_load(&arr);

	tagmember mem1 = { "홍길동",20,20,20,40 };
	arr_insert(&arr, mem1);

	tagmember mem2 = { "김길동",20,20,10,5 };
	arr_insert(&arr, mem2);

	arr_print(&arr);
	file_save(arr);
}

void file_save(tagmyarr p) {
	FILE* fp;
	if (fopen_s(&fp, "members.txt", "w") != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	fprintf(fp, "%d\n", p.size);

	for (int i = 0; i < p.size; i++) {

		tagmember mem = p.base[i];

		fprintf(fp,"%s\t%d\t%d\t%d\t%d\t%.1f\n",
			mem.name, mem.att, mem.report,
			mem.exam1, mem.exam2, mem.result);
	}

	fclose(fp);
}
void file_load(tagmyarr* p) {
	FILE* fp;
	if (fopen_s(&fp, "members.txt", "r") != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	int num;
	fscanf_s(fp, "%d", &num);

	for (int i = 0; i < num; i++) {

		tagmember mem;

		fscanf_s(fp, "%s %d %d %d %d %f",
			mem.name,(int)sizeof(mem.name),
			& mem.att, &mem.report,
			&mem.exam1, &mem.exam2, &mem.result);
		
		arr_insert(p, mem);
	}

	fclose(fp);
}

int main() {
	exam2();

	return 0;
}

void arr_init(tagmyarr* p) {
	p->max = 10;
	p->size = 0;
}

void arr_print(const tagmyarr* p) {
	printf("[%2d개]\n", p->size);

	for (int i = 0; i < p->size; i++) {
		tagmember mem = p->base[i];
		printf("[%d] %s\t %d\t %d\t %d\t %d\t %.1f\n", 
			i,mem.name, mem.att, mem.report,
			mem.exam1,mem.exam2,mem.result);
	}
	printf("\n\n");
}

int arr_insert(tagmyarr* p, tagmember value) {
	if (p->max <= p->size) {
		return 0;
	}

	//합산
	value.result = value.att + value.report + value.exam1 + value.exam2;

	p->base[p->size] = value;
	p->size++;
	return 1;
}

int arr_select(const tagmyarr* p, const char* name) {
	for (int i = 0; i < p->size; i++) {
		tagmember mem = p->base[i];
		if (strcmp(mem.name,name) == 0) {
			return i;
		}
	}
	return -1;
}

int arr_update(tagmyarr* p, const char* name, int exam1, int exam2) {
	int num = arr_select(p, name);
	if (num == -1)
		return 0;

	p->base[num].exam1 = exam1;
	p->base[num].exam2 = exam2;
	return 1;
}

int arr_delete(tagmyarr* p, const char* name) {
	int num = arr_select(p, name);
	if (num == -1)
		return 0;

	p->base[num].att = NULL;

	for (int i = num; i < p->size-1; i++) {
		p->base[i] = p->base[i + 1];
	}
	p->size--;
}


