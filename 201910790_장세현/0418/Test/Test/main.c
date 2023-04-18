#include "std.h"

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();

int main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	exam7();
	return 0;
}

void exam1() {
	int att = 0;

#pragma region |연산

	att = att | 4;		//att : 0000 0000
	// 4  : 0000 0100
	// |  : 0000 0100

	att = att | 32;     // att : 0000 0100
	// 32  : 0010 0000
	//  |  : 0010 0100

	att = att | 8;      // att : 0010 0100
	//  8  : 0000 1000
	//  |  : 0010 1100  
#pragma endregion


#pragma region &연산
	int ret = att & 32; //att : 0010 1100
	// 32 : 0010 0000
	// &  : 0010 0000

	if (ret)
		printf("출석\n");
	else
		printf("결석\n");

	ret = att & 2;		// att : 0010 1100
	//  2  : 0000 0010
	//  &  : 0000 0000
	if (ret)
		printf("출석\n");
	else
		printf("결석\n");

#pragma endregion

#pragma region ~연산

	att = att & ~8;			// att : 0010 1100
	//  8  : 0000 1000
	// ~8  : 1111 0111
	//  &  : 0010 0100

#pragma endregion

}

void exam2() {

#pragma region 복호화^연산
	int pw = 1234;

	int key = 65;

	pw = pw ^ key; //암호화
	printf("암호화 : %d\n", pw);


	pw = pw ^ key; //복호화
	printf("복호화 : %d\n", pw);
#pragma endregion




}

void exam3() {
#pragma region 두 비트 합치기
	int x = 13; // 1101
	int y = 7;  // 0111
	int xy = 0; // 상위 4bit : y , 하위 4bit : x
	// 0111 1101

	xy = xy | x;	// xy : 0000 0000
	// x  : 0000 1101
	//  | : 0000 1101


	xy = xy | (y << 4);		// xy : 0000 1101
	//  y : 0000 0111
	//y<<4: 0111 0000
	//  | : 0111 1101

	printf("xy : %d\n", xy);
#pragma endregion

#pragma region MyRegion
	int x1 = xy & 15;			// xy : 0111 1101
	// 15 : 0000 1111
	//  & : 0000 1101
	printf("x : %d\n", x1);

	int y1 = (xy & 0xf0) >> 4;

	printf("y : %d\n", y1);


#pragma endregion


}

void exam4() {
#pragma region 함수포인터
	// void (*p)(int, int)
	printf("%p\n", main);
#pragma endregion

}

void fun1() { printf("fun1()\n"); }
void fun2(int c) { printf("fun2() : %d\n", c); }
int fun3(int c, char ch) {
	printf("fun3() : %d, %c\n", c, ch);
	return 0;
}

void exam5() {
	void (*f1)() = fun1;
	void (*f2)(int) = fun2;
	int (*f3)(int, char);
	f3 = fun3;

	fun1();
	f1();
	fun2(10);
	f2(10);
	fun3(10, 'a');
	f3(10, 'a');
}

typedef int (*FUN)(int, int);

int add(int n1, int n2) { return n1 + n2; }
int sub(int n1, int n2) { return n1 - n2; }
int cal(int n1, int n2, int(*fun)(int, int)) {
	int value = fun(n1, n2);
	return value;
}
int cal1(int n1, int n2, FUN fun) {
	int value = fun(n1, n2);
	return value;
}

void exam6() { //함수를 인자로 전달
	printf("%d\n", cal(10, 20, add));
	printf("%d\n", cal(10, 20, sub));
}

void exam7()
{
	int(*funs[2])(int, int);
	funs[0] = add;
	funs[1] = sub;

	while (1) {
		printf("[1] 덧셈 [2] 뺄셈 [3] 종료 \n");
		int idx;
		scanf_s("%d", &idx);
		if (idx == 3)
			return;
		printf("%d\n",funs[idx - 1](10, 20));
		//scanf_s("%d", &idx);
		//switch (idx) {
		//case 1: printf("%d\n", add(10, 20)); break;
		//case 2: printf("%d\n", sub(10, 20)); break;
		//case 3: return;
		}
	}
}