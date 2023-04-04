#include <stdio.h>
#include "exam1.h"

void main() {
	//exam1();
	//exam2();
	exam3();
}

//void exam1() {
//	int num = 10;
//	printf("값 : %d\n", num);
//	printf("주소 : %p\n", &num);
//	printf("주소 : %d\n", (int)&num);
//
//	//주소고정  -> 프로젝트 속성 눌러서 구성 속성 에서 링커 에서 고급
//	// 임의주소 아니오 고정주소 예로 수정
//}

//void exam2() {
//	int arr[5] = { 10,20,30,40,50 };
//
//	printf("%d\n", (int)arr); //1375240
//	printf("%d\n", (int)(arr +1)); //1375244
//	printf("%d\n", arr[0] + 1); //11
//	printf("%d\n", (int)(arr + 2)); //1375248
//	printf("%d\n", arr[1]); //20   arr을 +1만큼 이동한 역참조
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