#include <iostream>
using namespace std;

class Parent
{
public:
	Parent() { cout << "Parent()" << endl; }
	Parent(int n) { cout << "Parent(int)" << endl; }
	~Parent() { cout << "~Parent()" << endl; }
};

class Child : public Parent
{
public:
	Child():Parent(10) { cout << "Child()" << endl; }
	Child(char n) { cout << "Child(int)" << endl; }
	~Child() { cout << "~Child()" << endl; }
};

int main()
{
	//Child 클래스에 default생성자?
	//1) 자식클래스의 적절한 생성자 호출!
	// 콜론초기화 영역을 확인!*****
	//2) 부모의 생성자를 호출하고 실행!->[부모생성]
	//3) 1번에서 호출된 생성자 실행!->[자식생성]
	Child c;
	Child c1('A');

	return 0;
}