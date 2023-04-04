#include<stdio.h>
#include "exam1.h"

void main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	exam5();
	//exam6();
	//exam7();
	//exam8();
	//exam9();
}

void exam1() {
	int num = 1;
	int result = ++num + ++num;

	printf("%d %d\n", num, result);
}
void exam2() {
	int num = 1;
	int result = num++ + num++;

	printf("%d %d\n", num, result);
}
void exam3() {
	int num = 10;
	if (num == 10) {
		printf("10¿Ã¥Ÿ");
	}
}
void exam4() {
	int num1, num2;
	num1 = 10;
	num2 = 20;
	char oper = '+';

	if (oper == '+') {
		printf("%d + %d = %d", num1, num2, num1 + num2);
	}
	else if (oper == '-') {
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}
	else if (oper == '*') {
		printf("%d * %d = %d", num1, num2, num1 * num2);
	}
	else {
		printf("NULL");
	}
}
void exam5() {

}
void exam6() {

}
void exam7() {

}
void exam8() {

}
void exam9() {

}
