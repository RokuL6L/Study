#include "std.h"

void MyLib::logo() {
	system("cls");
	printf("***********************************\n");
	printf("비트단기 58차 C++언어과정\n");
	printf("계좌관리 프로그램\n");
	printf("수업 실습\n");
	printf("2023-05-09\n");
	printf("장세현\n");
	printf("***********************************\n");
	system("pause");
}

void MyLib::ending() {
	system("cls");
	printf("***********************************\n");
	printf("프로그램을 종료합니다\n");
	printf("***********************************\n");
	system("pause");
}

int MyLib::input_integer(string msg) {
	cout << msg << " : ";
	int value;
	cin >> value;
	return value;
	
}

char MyLib::input_char(string msg) {
	cout << msg << " : ";
	char value;
	cin >> value;
	return value;
}

float MyLib::input_float(string msg) {
	cout << msg << " : ";
	float value;
	cin >> value;
	return value;
}

string MyLib::input_string(string msg) {
	cout << msg << " : ";
	string value;
	cin >> value;
	return value;
}