#include "std.h"

void app_init() {
	logo();
	con_init();
}

void app_run() {
	while (1) 
	{
		system("cls");
		con_printall();
		char sel = menuprint();
		switch (sel) {
		case ('1'):
			con_insert();
			break;
		case ('2'):
			con_select();
			break;
		case ('3'):
			con_update();
			break;
		case ('4'):
			con_delete();
			break;
		case ('5'):
			return;
		default:printf("�߸�����\n");
		}
		system("pause");
	}
}


void app_exit() {
	ending();
}


void logo() {
	system("cls");  //cmd ��ɾ� clear �� ����
	printf("******************************\n");
	printf(" �ܱ� 58�� C��� ����\n");
	printf(" ���α׷� ���� + 2���� �迭\n");
	printf(" 2023-03-30\n");
	printf(" �弼��\n");
	printf("******************************\n");
	system("pause");
}

char menuprint() {
	printf("******************************\n");
	printf("[1] ����(insert)\n");
	printf("[2] �˻�(select)\n");
	printf("[3] ����(update)\n");
	printf("[4] ����(delete)\n");
	printf("[5] ���α׷� ����\n");
	printf("******************************\n");
	char ch;
	ch = _getch();
	return ch;
}



void ending() {
	system("cls");
	printf("******************************\n");
	printf("���α׷��� �����մϴ�\n");
	printf("******************************\n");
	system("pause");
}