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
	�ڽ� ��ü ����
	���� : ���� ������ ��ġ�ϴ� �����ڰ� child�� �־�� �Ѵ�,.
	ȣ���帧 
	1) Child �������� �ݷ��ʱ�ȭ ����
		-�ƹ��� ó���� ���ٸ� �θ�� ����Ʈ
	2) Parent�� ������ ȣ�� -> ����
	3) 1)�� Child������ ȣ�� -> ����

	*/

	Child c1;
	Child c2('A');



	return 0;
}