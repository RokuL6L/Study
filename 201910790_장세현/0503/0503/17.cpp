#include <iostream>
using namespace std;

class Sample
{
private:
	int num1 = 10;
public:
	void fun1()
	{
		num1++;
		a++;
	}

	void fun2(int a) const
	{
		//num1++;
		a++;

		//fun2(); 에러
	}
	void fun3(int a) const
	{
		//num1++;
		a++;

		//fun2(); 에러
		fun4();
	}
	void fun4() const {}
};

int main()
{
	Sample s;
	s.fun3(1);

}