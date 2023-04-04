#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "exam1.h"


void main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	//exam7();
	//exam8();
	//exam9();
	exam10();
	//exam11();
	//exam12();
	//exam13();
	//exam14();
	//exam15();
	//exam16();
	//exam17();
	//exam18();
	//exam19();

}

void exam1() {
	int num = 1;
	int arr[3] = { 2,3,4 };

	printf("%d, %d\n", (int)sizeof(int), (int)sizeof(num));

	printf("%d, %d\n", (int)sizeof(int), (int)sizeof(arr));


	num = 11;
	arr[0] = 22;
	arr[1] = 33;
	arr[2] = 44;

	printf("%d, %d, %d, %d\n", num, arr[0], arr[1], arr[2]);

	printf("정수입력 : ");
	scanf_s("%d", &num);

	printf("정수입력 : ");
	scanf_s("%d", &arr[0]);
	


	printf("정수입력 : ");
	scanf_s("%d", &arr[1]);

	printf("정수입력 : ");
	scanf_s("%d", &arr[2]);

	printf("%d, %d, %d, %d\n", num, arr[0], arr[1], arr[2]);

	//int num[10] = { 0 };
	//for (int i = 0; i < 10; i++) {
	//	num[i] = i+1;
	//}
	//for (int i = 0; i < 10; i++) {
	//	printf("num[%d] = %d\n", i, num[i]);
	//}
}
void exam2() {
	int n1, n2, n3;

	printf("정수 입력 : ");
	scanf_s("%d", &n1);
	printf("정수 입력 : ");
	scanf_s("%d", &n2);
	printf("정수 입력 : ");
	scanf_s("%d", &n3);

	printf("%d, %d, %d\n", n1, n2, n3);

	int arr[3];
	int size = (int)sizeof(arr) / (int)sizeof(int);

	for (int i = 0; i < size; i++) {
		printf("정수 입력 : ");
		scanf_s("%d", &arr[i]);
	}

	printf("%d, %d, %d\n",arr[0], arr[1], arr[2]);
}
void exam3() {
	int arr[10];
	int size = (int)sizeof(arr) / (int)sizeof(int);

	for (int i = 0; i < size; i++) {
		arr[i] = i+1;
	}

	for (int i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
void exam4() {
	int arr[10];
	int size = (int)sizeof(arr) / (int)sizeof(int);

	for (int i = 0; i < size; i++) {
		arr[i] = (i+1) * 10;
	}

	for (int i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}
void exam5() {
	char arr[26];
	int size = (int)sizeof(arr) / (int)sizeof(char);
	printf("size = %d\n", size);
	for (int i = 0; i < size; i++) {
		arr[i] = i + 'A';
	}

	for (int i = 0; i < size; i++) {
		printf("arr[%d] = %c\n", i, arr[i]);
	}
}
void exam6() {
	//rand % 10  //0~9

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++) {
		int value = rand();
		printf("%d\n", value);
	}
}
void exam7() {
	int arr[10000];
	int size = (int)sizeof(arr) / (int)sizeof(int);

	srand((unsigned int)time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++) {
		//printf("%2d", arr[i]);
	}

	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	printf("합의 결과 : %d\n", sum);

	int five = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == 5) {
			five++;
		}
	}
	printf("합의 결과 : %d\n", five);


}
void exam8() {
	char arr[10000];
	int size = (int)sizeof(arr) / (int)sizeof(arr[0]);
	srand((unsigned int)time(NULL));

	int count = 0;
	for (int i = 0; i < size; i++) {
		arr[i] = 65 + rand() % 10;
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] == 'A') {
			count++;
		}
	}
	printf("합의 결과 : %d\n", count);


}
void exam9() {
	int arr[10];
	int size = (int)sizeof(arr) / (int)sizeof(arr[0]);

}
void exam10() {
	int num
}
void exam11() {

}
void exam12() {

}
void exam13() {

}
void exam14() {

}
void exam15() {

}
void exam16() {

}
void exam17() {

}
void exam18() {

}
void exam19() {

}