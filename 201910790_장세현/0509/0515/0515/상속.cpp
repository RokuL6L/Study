#include <iostream>
using namespace std;

class Parent
{
private:
	int num1;
public:
	void fun1() { cout << "Parent::fun1()" << endl; }
};

class Child : public Parent
{
private:
	int num2;
public:
	void fun2() { cout << "Parent::fun2()" << endl; }
};

int main()
{
	cout << sizeof(Parent) << endl;
	cout << sizeof(Child) << endl;

	Child c;
	c.fun1();
	c.fun2();

	return 0;
}