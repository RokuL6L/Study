#include <stdio.h>

void exam1();
void exam2();
void exam3();

void main() {
	//exam1();
	//exam2();
	exam3();
}

void exam1() {
	printf("Hello\n");
	fprintf(stdout, "Hello");
}
void exam2() {
	char ch;

	ch = getchar();
	putchar(ch);
	
}
void exam3() {
	char ch1, ch2;

	printf("문자 입력 : ");
	ch1 = getchar();

	char dummy = getchar();

	printf("문자 입력 : ");
	ch2 = getchar();

	printf("%c, %c", ch1, ch2);
}