#include <iostream>
using namespace std;

class Parent {
public:
	Parent()		{ cout << "Parent::Parent()" << endl; }
	Parent(int n)	{ cout << "Parent::Parent(int )" << endl; }
	~Parent()		{ cout << "Parent::~Parent()" << endl; }

};

class Child : public Parent
{
public:
	Child() : Parent(10) { cout << "Child::Child()" << endl; }
	Child(char n) { cout << "Child::Child(char )" << endl; }
	~Child() { cout << "Child::~Child()" << endl; }

};

int main() {

	/*
	자식 객체 생성
	문법 : 개게 생성과 일치하는 생성자가 child에 있어야 한다,.
	호출흐름 
	1) Child 생성자의 콜론초기화 영역
		-아무런 처리가 없다면 부모는 디폴트
	2) Parent의 생성자 호출 -> 생성
	3) 1)번 Child생성자 호출 -> 생성

	*/

	Child c1;
	Child c2('A');



	return 0;
}