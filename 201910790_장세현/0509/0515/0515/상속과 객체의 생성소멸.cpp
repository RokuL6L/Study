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
	//Child Ŭ������ default������?
	//1) �ڽ�Ŭ������ ������ ������ ȣ��!
	// �ݷ��ʱ�ȭ ������ Ȯ��!*****
	//2) �θ��� �����ڸ� ȣ���ϰ� ����!->[�θ����]
	//3) 1������ ȣ��� ������ ����!->[�ڽĻ���]
	Child c;
	Child c1('A');

	return 0;
}