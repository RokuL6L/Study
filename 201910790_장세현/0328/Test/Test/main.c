#include <stdio.h>
#include "exam1.h"

void foo(int* parr);
void print(int* parr, int size);
void goo(int value, int* pvalue);

void main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	exam7();
	//exam8();
	//exam9();
	//exam10();
	//exam11();
	//exam12();
	//exam13();
	//exam14();
	//exam15();
	//exam16();
	//exam17();
	//exam18();
	//exam19();
	//exam20();

}

//void exam1() {
//	int arr[5] = { 1,2,3,4,5 };
//
//	for (int i = 0; i < 5; i++) {
//		printf("%3d", arr[i]);
//	}
//
//	printf("\n");
//	
//	arr[4] = 55;
//
//	scanf_s("%d", &arr[1]);
//
//	for (int i = 0; i < 5; i++) {
//		printf("%3d", arr[i]);
//	}
//
//}
//void exam2() {
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
//	arr[1][1] = 55;
//
//	scanf_s("%d", &arr[0][2]);
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//void exam3() {
//	int jumsu[3][4] = { {90,80,70}, {60,50,35}, {100,85,76} };
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d  ", jumsu[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	jumsu[0][1] = 83;
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			jumsu[i][3] += jumsu[i][j];
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d  ", jumsu[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//}
//void exam4() {
//	int jumsu[3][4] = { {90,80,70}, {60,50,35}, {100,85,76} };
//
//	printf("%d\n", (int)jumsu);  //208
//
//	printf("%d\n", (int)(jumsu+1)); //224 행이동   + 16
//
//	printf("%d\n", (int)((*jumsu) + 1)); // 1차원 이동  212  +4
//
//	printf("%d\n", (int)jumsu[2]); //2차원 이동  240   +32
////	printf("%d\n", jumsu[2][-1]);
//}
//void exam5() {
//	int arr[5] = { 1,2,3,4,5 };
//
//	int* parr = arr;
//
//	printf("%d %d\n", arr[1], parr[1]);
//	printf("%d %d\n", *(arr+1), *(parr+1));
//
//	int* parr1 = arr + 3; 
//
//	printf("%d %d\n", arr[1], parr1[1]);
//	printf("%d %d\n", *(arr + 1), *(parr1 + 1));
//}
//void exam6() {
//
//	//int arr1[3]; // int*[3]
//	//int(*parr)[3]; // int(*)[3]
//
//int arr[2][3] = { {1,2,3},{4,5,6} };
//int jumsu[3][4] = { {90,80,70}, {60,50,35}, {100,85,76} };
//		
//int(*p1)[3] = arr;
//int(*p2)[4] = jumsu;
//
//printf("%d, %d\n", arr[1][0], p1[1][0]);
//printf("%d, %d\n", *(*(jumsu+1)+2), p2[1][2]);
//}
void exam7(){
	int arr[5] = { 1,2,3,4,5 };
	foo(arr);
	goo(arr[0], &arr[0]);
	print(arr,5);
	

}
void goo(int value, int* pvalue) {
	value = 33;
	*pvalue = 44;
}
void print(int* parr, int size) {
	for (int i = 0; i < 5; i++) {
		printf("%d  ", parr[i]);
	}
}
void foo(int* parr) {
	parr[1] = 4;
}
void exam8() {

}
void exam9() {

}
void exam10() {

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
void exam20() {

}
