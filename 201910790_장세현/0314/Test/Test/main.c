#include <stdio.h>
#include "exam1.h"



void main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	//exam7();
}



void exam1() {
	char ch1,ch2,index;

	printf("Insert : ");

	ch1 = getchar();
	index = getchar();
	printf("Insert : ");

	ch2 = getchar();

	printf("Print  : %c , %c\n", ch1, ch2);

	putchar(ch1);
	putchar(ch2);
}
void exam2() {
	char ch1[20];

	printf("Insert : ");
	gets_s(ch1, sizeof(ch1));
	printf("Print : ");
	puts(ch1);
}
void exam3() {
	int num = 33;

	printf("%d %d\n", num, 5);
}
void exam4() {
	int n1, n2, n3;

	printf("Insert Int :");
	scanf_s("%d", &n1);

	printf("Insert Int :");
	scanf_s("%d", &n2);

	printf("Insert Int :");
	scanf_s("%d", &n3);

	printf("Printf     :%d, %d, %d", n1, n2, n3);
}
void exam5() {
	int n1, n2, n3;

	printf("Insert Int :");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	printf("Printf     :%d, %d, %d", n1, n2, n3);
}
void exam6() {

	char name[20];
	int age;
	char gender;
	float weight;

	printf("이름 :");
	scanf_s("%s", &name, (int)sizeof(name));

	printf("나이 :");
	scanf_s("%d", &age);
	char dummy = getchar();

	printf("성별 :");
	scanf_s("%c", &gender, (int)sizeof(gender));

	printf("무게 :");
	scanf_s("%f", &weight);

	printf(" <=====================결과=====================>\n");

	printf("이름 : %s\n나이 : %d세\n성별 : %c\n무게 : %.1fkg\n", name, age, gender, weight);
}
void exam7() {
	char name[20];
	int age = 0;
	char gender;
	float weight;

	printf("이름 :");
	gets_s(name, (int)sizeof(name));

	printf("나이 :");
	gets_s(age, (int)sizeof(age));

	printf("성별 :");
	scanf_s("%c", &gender, (int)sizeof(gender));

	printf("무게 :");
	scanf_s("%f", &weight);

	printf(" <=====================결과=====================>\n");

	printf("이름 : %s\n나이 : %d세\n성별 : %c\n무게 : %.1fkg\n", name, age, gender, weight);
}
