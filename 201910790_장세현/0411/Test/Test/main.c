#include "std.h"

typedef struct Tagmyarr {
	int base[10];
	int max;
	int size;
}tagmyarr;

//수정 안하면 const
void arr_init(tagmyarr* p);
void arr_print(const tagmyarr* p);
int arr_insert(tagmyarr* p, int value);
int arr_select(const tagmyarr* p, int value);
int arr_update(tagmyarr* p, int value, int update);
int arr_delete(tagmyarr* p, int value);

int main() {
	tagmyarr arr;

	arr_init(&arr);
	arr_print(&arr);

	for (int i = 0; i <= 100; i = i + 10) {
		if (arr_insert(&arr, i) == 0)
			printf("OverFlow\n");
	}
	arr_print(&arr);

	int idx = arr_select(&arr, 80);

	if (idx != -1) {
		printf("검색결과 : %d\n", arr.base[idx]);
	}

	arr_update(&arr, 70, 77);
	arr_print(&arr);

	arr_delete(&arr, 60);
	arr_print(&arr);
	return 0;
}
int arr_delete(tagmyarr* p, int value) {
	int num = arr_select(p, value);
	if (num == -1)
		return 0;

	p->base[num] = NULL;

	for (int i = num; i < p->size-1; i++) {
		p->base[i] = p->base[i + 1];
	}
	p->size--;
}

int arr_select(const tagmyarr* p, int value) {
	for (int i = 0; i < p->size; i++) {
		int num = p->base[i];
		if (num == value) {
			return i;
		}
	}
	return -1;
}
int arr_update(tagmyarr* p, int value, int update) {
	int num = arr_select(p, value);
	if (num == -1)
		return 0;

	p->base[num] = update;
	return 1;
}

int arr_insert(tagmyarr* p, int value) {
	if (p->max <= p->size) {
		return 0;
	}

	p->base[p->size] = value;
	p->size++;
	return 1;
}

void arr_print(const tagmyarr* p) {
	printf("[%2d개 ]", p->size);

	for (int i = 0; i < p->size; i++) {
		int value = p->base[i];
		printf("%3d", value);
	}
	printf("\n");
}

void arr_init(tagmyarr* p) {
	p->max = 10;
	p->size = 0;
}