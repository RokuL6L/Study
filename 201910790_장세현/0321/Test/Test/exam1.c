#include <stdio.h>
#include "exam1.h"

void main() {
	//exam1();
	//exam2();
	exam3();
}

//void exam1() {
//	int num = 10;
//	printf("�� : %d\n", num);
//	printf("�ּ� : %p\n", &num);
//	printf("�ּ� : %d\n", (int)&num);
//
//	//�ּҰ���  -> ������Ʈ �Ӽ� ������ ���� �Ӽ� ���� ��Ŀ ���� ���
//	// �����ּ� �ƴϿ� �����ּ� ���� ����
//}

//void exam2() {
//	int arr[5] = { 10,20,30,40,50 };
//
//	printf("%d\n", (int)arr); //1375240
//	printf("%d\n", (int)(arr +1)); //1375244
//	printf("%d\n", arr[0] + 1); //11
//	printf("%d\n", (int)(arr + 2)); //1375248
//	printf("%d\n", arr[1]); //20   arr�� +1��ŭ �̵��� ������
//	printf("%d\n", *(arr + 1));
//
//	int a = 21;
//	int* b = &a;
//
//	printf("%d\n", *&a);
//}

void exam3() {
	int arr[5] = { 10,20,30,40,50 };
	int num;
	int* p1;
	int* p2;

	num = *(arr+1);

	printf("%d\n", num);

	p1 = arr;
	p2 = &num;

	printf("%d\n",*p1);
	printf("%d\n", *(p1+1));
	printf("%d\n", p1[1]);

	printf("%d\n", *p1+1);
	printf("\n");

	p2 = arr + 2;

	printf("%d\n", p2[2]);
	printf("%d\n", p2[-2]);
	printf("%d\n", p2[0]);
}