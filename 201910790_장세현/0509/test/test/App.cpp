#include "std.h"

App::App() {

}
App::~App() {

}

void App::init() {
	MyLib::logo();

}
void App::run() {
	while (1)
	{
		system("cls");
		control.account_printall();
		switch (menuprint())
		{
		case '1': control.account_insert(); break;
		case '2': control.account_select();	break;
		case '3': control.account_inquire(); break;
		case '4': control.account_withdraw(); break;
		case '5': control.account_delete();	break;
		case '6': return;
		}
		system("pause");
	}
}
void App::exit() {
	MyLib::ending();
}

char App::menuprint() {
	printf("***********************************\n");
	printf("[1] ���� ����\n");
	printf("[2] ���� �˻�\n");
	printf("[3] ���� �Ա�(����)\n");
	printf("[4] ���� ���(����)\n");
	printf("[5] ���� ����\n");
	printf("[6] ���α׷� ����\n");
	printf("***********************************\n");

	return _getch();
}