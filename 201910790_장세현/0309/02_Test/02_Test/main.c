#include <stdio.h>
#include "exam.h"


void main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	exam7();
}

void exam1() {
	short num1;
	int num2;

	num1 = 32768;
	num2 = 32768;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
}
void exam2() {
	int num1 = 15;
	printf("%d %o %x\n", num1, num1, num1);
}
void exam3() {
	char ch = '0';

	printf("%d %c %o %x\n", ch, ch, ch, ch);

	ch = 66;

	printf("%d %c %o %x\n", ch, ch, ch, ch);
}
void exam4() {
	float f1 = 10.123;
	double d1 = 10.123;

	printf("%f %f", f1, d1);
}
void exam5() {
	int num1 = 1;
	int num2 = 4;

	int result = num1 / num2;

	float resulltf = (float)num1 / num2;
}
void exam6() {
	int num;
	char ch;
	float fnum;

	printf("%dbyte, %dbyte\n", sizeof(int), sizeof(num));
}
void exam7() {
	int num1 = 10; //변수
	const int NUM1 = 10; //상수

	num1 = 20;
	num1 = 30;

	num1 = NUM1;
}
