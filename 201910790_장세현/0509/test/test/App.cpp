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
	printf("[1] 계좌 개설\n");
	printf("[2] 계좌 검색\n");
	printf("[3] 계좌 입금(수정)\n");
	printf("[4] 계좌 출금(수정)\n");
	printf("[5] 계좌 삭제\n");
	printf("[6] 프로그램 종료\n");
	printf("***********************************\n");

	return _getch();
}