#include "std.h"

void MyLib::logo()
{
	system("cls");
	printf("***********************************\n");
	printf("��Ʈ�ܱ� 58�� C������\n");
	printf("���°��� ���α׷�\n");
	printf("���� �ǽ�\n");
	printf("2023-05-8\n");
	printf("��â��\n");
	printf("***********************************\n");
	system("pause");
}

void MyLib::ending() 
{
}

int MyLib::input_integer(string msg)
{
	cout << msg << ":";

	int value;
	cin >> value;
	return value;
}
char MyLib::input_char(string msg)
{
	cout << msg << ":";

	char value;
	cin >> value;
	return value;
}
float MyLib::input_float(string msg)
{
	cout << msg << ":";

	float value;
	cin >> value;
	return value;
}
string MyLib::input_string(string msg)
{
	cout << msg << ":";

	string value;
	cin >> value;
	return value;
}
