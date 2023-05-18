//16_const 사용
/*
맴버 필드(데이터) : 상수 맴버 필드
					- 값을 변경x
					- 반드시 선언과 동시에 초기화
맴버 함수			: 상수 맴버 함수
						-맴버 변수 변경 x
						-상수 맴버 함수만 호출 가능
*/
#include <iostream>
using namespace std;

class Sample
{
private:
	int num1=10; //맴버 변수
	const int num2=20; //맴버 상수

public:
	Sample(int n1, int n2)
		: num1(n1), num2(n2) //콜론 초기화 영역
	{
		num1 = 30;
		//num2 = 30;
	}
};

int main()
{
	Sample s1(10, 20);
	return 0;
}


