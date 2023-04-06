#include "std.h"

#define DATA_SIZE 10

Phone phones[DATA_SIZE];

void con_init() {

	for (int i = 0; i < DATA_SIZE; i++) {
		phones[i].flag = 0;

	}
}

void printall() {
	Phone p;
	printf("������ġ  �̸�        ��ȭ��ȣ       �׷�\n");
	for (int i = 0; i < DATA_SIZE; i++) {
		p = phones[i];
		if (p.flag == 1) {
			printf("[ %d ]  [ %s ]  [ %s ]  [ %d ]\n",
				i, p.name, p.phone, p.group);
		}
		else {
			printf("[ %d ]\n", i);
		}
	}
}
//�����˻�
int name_to_idx(const char* name) {
	for (int i = 0; i < DATA_SIZE; i++) {
		Phone ph = phones[i];
		if (strcmp(ph.name, name) == 0) {
			return i;
		}
	}
	return -1;
}

void con_insert() {
	char _name[20];
	char _phone[20];
	int _group;
	int _idx;
	
	system("cls");
	printf("���� ��ġ ( 0 ~ %d ) : ", DATA_SIZE - 1);
	scanf_s("%d", &_idx);
	char dummy = getchar();

	if (phones[_idx].flag == 1) { printf("�����Ͱ� �����մϴ�\n"); return; }


	printf("�̸� : ");   gets_s(_name, sizeof(_name));
	printf("��ȭ��ȣ : ");  gets_s(_phone, sizeof(_phone));
	printf("�׷� : [ 1 - ���� ] [ 2 - ģ�� ] [ 3 - ��Ÿ ]\n");
	scanf_s("%d", &_group);
	char dummmy = getchar();

	Phone ph;
	ph.flag = 1;
	ph.group = _group;
	strcpy_s(ph.name, sizeof(ph.name), _name);
	strcpy_s(ph.phone, sizeof(ph.phone), _phone);

	phones[_idx] = ph;

	printf("����Ǿ����ϴ�.\n");
	system("pause");
}

void con_select() {
	char _name[20];
	system("cls");
	printf("�̸� : ");
	gets_s(_name, sizeof(_name));

	int idx = name_to_idx(_name);

	if (idx == -1) {
		printf("�����ϴ�.\n");
	}
	else {
		Phone p = phones[idx];
		printf("������ġ  �̸�        ��ȭ��ȣ       �׷�\n");
		printf("[ %d ]  [ %s ]  [ %s ]  [ %d ]\n",
			idx, p.name, p.phone, p.group);
	}
	system("pause");
}

void con_update() {
	char _name[20];
	system("cls");
	printf("�̸� : ");
	gets_s(_name, sizeof(_name));

	int idx = name_to_idx(_name);

	if (idx == -1) {
		printf("�����ϴ�.\n");
	}
	else {
		char _phone[20];
		int _group;
		
		printf("��ȭ��ȣ : ");  gets_s(_phone, sizeof(_phone));
		printf("�׷� : [ 1 - ���� ] [ 2 - ģ�� ] [ 3 - ��Ÿ ]\n");
		scanf_s("%d", &_group);
		char dummmy = getchar();

		Phone p = phones[idx];
		strcpy_s(p.phone, sizeof(p.phone), _phone);
		p.group = _group;
		phones[idx] = p;
	}
	system("pause");
}

void con_delete(){
	char _name[20];
	system("cls");
	printf("�̸� : ");
	gets_s(_name, sizeof(_name));

	int idx = name_to_idx(_name);

	if (idx == -1) {
		printf("�����ϴ�.\n");
	}
	else {
		Phone ph = phones[idx];
		strcpy_s(ph.name, sizeof(ph.name), "");
		strcpy_s(ph.phone, sizeof(ph.phone), "");
		ph.group = 0;
		ph.flag = 0;
		phones[idx] = ph;
	}
	system("pause");

}

void con_select_group() {
	int _group;
	system("cls");
	printf("�׷� : [ 1 - ���� ] [ 2 - ģ�� ] [ 3 - ��Ÿ ]\n");
	scanf_s("%d", &_group);
	char dummmy = getchar();
	system("cls");
	printf("������ġ  �̸�        ��ȭ��ȣ       �׷�\n");
	for (int i = 0; i < DATA_SIZE; i++) {
		Phone ph = phones[i];
		if (ph.group == _group) {
			printf("[ %d ]  [ %s ]  [ %s ]  [ %d ]\n",
				i, ph.name, ph.phone, ph.group);
		}
	}
	system("pause");
}