#include "std.h"


void app_init() {
	logo();
	con_init();
}

void app_run() {
	while (1) {
		system("cls");
		printall();
		switch (menuprint()) {
		case '1' :
			//����
			con_insert();
			break;
		case '2' :
			//�˻�
			con_select();
			break;
		case '3':
			//����
			con_update();
			break;
		case '4':
			//����
			con_delete();
			break;
		case '5':
			//�˻� ���ϴ� �˻� ��ü
			con_select_group();
			break;
		case '6':
			//����
			return;
		}
	}
}

void app_exit() {
	ending();
}

void logo() {
	system("cls");
	printf("****************************************\n");
	printf("��Ʈ�ܱ� 58�� C������\n");
	printf("����ü�� �̿��� �������α׷�");
	printf("���� �ǽ�\n");
	printf("2023-04-06\n");
	printf("�弼��\n");
	printf("****************************************\n");
	system("pause");

}

char menuprint() {
	printf("****************************************\n");
	printf("[1] ����\n");
	printf("[2] �˻�\n");
	printf("[3] ����\n");
	printf("[4] ����\n");
	printf("[5] �˻�( ���ϴ� �׷� ��ü )\n");
	printf("[6] ����\n");
	printf("****************************************\n");
	
	return _getch();
}

void ending() {
	system("cls");
	printf("****************************************\n");
	printf("���α׷��� �����մϴ�\n");
	printf("****************************************\n");
	system("pause");

}