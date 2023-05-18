//15_this포인터
//객체 자신의 주소를 저장하고 있는 포인터
//멤버 함수내부에서 사용가능
//-멤버 함수 호출시 자동으로 전달
#include<iostream>
using namespace std;

class Sample
{
private:
	int num1;
	int num2;
public:
	Sample(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}

public:
	void fun()
	{
		num1 = 10;
		this->num1 = 10;

		cout << this << endl;

	}
};


int main()
{
	Sample s1; //객체 생성
	cout << &s1 << endl; //객체 주소 출력
	s1.fun();

	return 0;
}
