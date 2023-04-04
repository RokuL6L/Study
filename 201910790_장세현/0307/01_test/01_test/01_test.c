#include <stdio.h>
#include "exam1.h"

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();

void main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	exam5();
}

void exam1() {
	int num1 = 1;
	char ch1 = 'c';
	double db1 = 3.141592;

	printf("%d\n", num1);
	printf("%c", ch1);
}

void exam2() {
	hello();
}

void exam3() {
	int num = 10;
	printf("* num = %d *\n", num);

	num = 30;
	printf("* num = %d *\n", num);
}

void exam4() {
	int num1;
	int num2;

	num1 = 10;
	num2 = 20;

	printf("%d\n", num1);
	printf("%d\n", num2);

	//scanf_s("%d", &num1);
	//printf("%d", num1);
	
	char ch1;

	ch1 = 'A';

	printf("%d\n", ch1);

	char ch2[20];
	scanf_s("%[^\n]s", ch2, sizeof(ch2));
	printf("%s",ch2);
}

void exam5() {
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	printf("입력하신 값은 %d입니다.",num);
}