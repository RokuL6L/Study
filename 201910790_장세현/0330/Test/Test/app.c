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
		default:printf("잘못선택\n");
		}
		system("pause");
	}
}


void app_exit() {
	ending();
}


void logo() {
	system("cls");  //cmd 명령어 clear 와 같음
	printf("******************************\n");
	printf(" 단기 58차 C언어 과정\n");
	printf(" 프로그램 구조 + 2차원 배열\n");
	printf(" 2023-03-30\n");
	printf(" 장세현\n");
	printf("******************************\n");
	system("pause");
}

char menuprint() {
	printf("******************************\n");
	printf("[1] 저장(insert)\n");
	printf("[2] 검색(select)\n");
	printf("[3] 수정(update)\n");
	printf("[4] 삭제(delete)\n");
	printf("[5] 프로그램 종료\n");
	printf("******************************\n");
	char ch;
	ch = _getch();
	return ch;
}



void ending() {
	system("cls");
	printf("******************************\n");
	printf("프로그램을 종료합니다\n");
	printf("******************************\n");
	system("pause");
}