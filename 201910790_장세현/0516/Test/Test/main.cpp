#include <iostream>
using namespace std;

class Parent {
private:
	int num1;
public:
	void foo() { cout << "Parent::foo()" << endl; }
};

class Child : public Parent
{
private:
	int num2;
public:
	void woo() { cout << "Child::woo()" << endl; }
};

int main() {
	cout << sizeof(Parent) << endl;
	cout << sizeof(Child) << endl;

	Child c;
	c.woo();
	c.foo();

	return 0;
}