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
			//저장
			con_insert();
			break;
		case '2' :
			//검색
			con_select();
			break;
		case '3':
			//수정
			con_update();
			break;
		case '4':
			//삭제
			con_delete();
			break;
		case '5':
			//검색 원하는 검색 전체
			con_select_group();
			break;
		case '6':
			//종료
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
	printf("비트단기 58차 C언어과정\n");
	printf("구조체를 이용한 관리프로그램");
	printf("수업 실습\n");
	printf("2023-04-06\n");
	printf("장세현\n");
	printf("****************************************\n");
	system("pause");

}

char menuprint() {
	printf("****************************************\n");
	printf("[1] 저장\n");
	printf("[2] 검색\n");
	printf("[3] 수정\n");
	printf("[4] 삭제\n");
	printf("[5] 검색( 원하는 그룹 전체 )\n");
	printf("[6] 종료\n");
	printf("****************************************\n");
	
	return _getch();
}

void ending() {
	system("cls");
	printf("****************************************\n");
	printf("프로그램을 종료합니다\n");
	printf("****************************************\n");
	system("pause");

}