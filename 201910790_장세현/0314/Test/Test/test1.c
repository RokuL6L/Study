#include <stdio.h>
#include "exam1.h"

void main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	exam6();
	exam7();
	exam8();
	exam9();
}

void exam1() {
	int sum;
	
	short s1 = 20000;
	short s2 = 30000;

	printf("%d %d\n", s1, s2);

	sum = s1 + s2;

	printf("%d", sum);
}

void exam2() {
	char ch1 = 'A';
	char ch2;

	ch2 = ch1 + 1;

	printf("* %c  --->  %c  *",ch1, ch2);
}

void exam3() {
	int n1, n2;
	int sum;

	printf("Insert : ");
	scanf_s("%d %d",&n1,&n2);

	sum = n1 + n2;

	printf("Result : %d", sum);
}

void exam4() {
	int num1, num2;

	int sum;

	printf("밑변 입력 : ");
	scanf_s("%d", &num1);

	printf("높이 입력 : ");
	scanf_s("%d", &num2);

	sum = num1 * num2;

	printf("사각형의 넓이 : %d", sum);
}

void exam5() {
	int num1, num2;
	int sum;
	int change;

	printf("가지고 있는 돈 : ");
	scanf_s("%d", &num1);

	printf("사과의 가격 : ");
	scanf_s("%d", &num2);

	sum = num1 / num2;
	change = num1 % num2;

	printf("구매 가능한 사과 수 : %d개\n", sum);
	printf("남은 돈 : %d원", change);
}

void exam6() {
	int n1, n2;
	int result;

	printf("정수 입력 :");
	scanf_s("%d", &n1);

	printf("정수 입력 :");
	scanf_s("%d", &n2);

	result = n1 - n2;

	printf("빼기 값 : %d\n", result);
}
void exam7() {
	int n1, n2, n3;
	int result;

	//printf("정수 입력 :");
	//scanf_s("%d", &n1);
	//printf("정수 입력 :");
	//scanf_s("%d", &n2);
	//printf("정수 입력 :");
	//scanf_s("%d", &n3);

	printf("정수 입력 :");
	scanf_s("%d %d %d", &n1,&n2,&n3);

	result = n1 + n2 + n3;

	printf("%d + %d + %d = %d\n", n1, n2, n3, result);
}
void exam8() {
	int n1, n2;
	int result;

	printf("밑변 입력 :");
	scanf_s("%d", &n1);

	printf("높이 입력 :");
	scanf_s("%d", &n2);

	result = (n1 * n2) / 2;

	printf("삼각형의 넓이 : %d\n", result);
}
void exam9() {
	double f1 = 0;
	double result = 0;

	printf("화씨 온도를 입력하시오 :");
	scanf_s("%lf", &f1);

	result = (f1 - 32) * (5.0/9.0);


	printf("섭씨 온도로는 %lf 입니다.\n", result);
}