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

	printf("�غ� �Է� : ");
	scanf_s("%d", &num1);

	printf("���� �Է� : ");
	scanf_s("%d", &num2);

	sum = num1 * num2;

	printf("�簢���� ���� : %d", sum);
}

void exam5() {
	int num1, num2;
	int sum;
	int change;

	printf("������ �ִ� �� : ");
	scanf_s("%d", &num1);

	printf("����� ���� : ");
	scanf_s("%d", &num2);

	sum = num1 / num2;
	change = num1 % num2;

	printf("���� ������ ��� �� : %d��\n", sum);
	printf("���� �� : %d��", change);
}

void exam6() {
	int n1, n2;
	int result;

	printf("���� �Է� :");
	scanf_s("%d", &n1);

	printf("���� �Է� :");
	scanf_s("%d", &n2);

	result = n1 - n2;

	printf("���� �� : %d\n", result);
}
void exam7() {
	int n1, n2, n3;
	int result;

	//printf("���� �Է� :");
	//scanf_s("%d", &n1);
	//printf("���� �Է� :");
	//scanf_s("%d", &n2);
	//printf("���� �Է� :");
	//scanf_s("%d", &n3);

	printf("���� �Է� :");
	scanf_s("%d %d %d", &n1,&n2,&n3);

	result = n1 + n2 + n3;

	printf("%d + %d + %d = %d\n", n1, n2, n3, result);
}
void exam8() {
	int n1, n2;
	int result;

	printf("�غ� �Է� :");
	scanf_s("%d", &n1);

	printf("���� �Է� :");
	scanf_s("%d", &n2);

	result = (n1 * n2) / 2;

	printf("�ﰢ���� ���� : %d\n", result);
}
void exam9() {
	double f1 = 0;
	double result = 0;

	printf("ȭ�� �µ��� �Է��Ͻÿ� :");
	scanf_s("%lf", &f1);

	result = (f1 - 32) * (5.0/9.0);


	printf("���� �µ��δ� %lf �Դϴ�.\n", result);
}