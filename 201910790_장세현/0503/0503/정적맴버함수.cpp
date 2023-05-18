#include <iostream>
using namespace std;

class Cal
{
	//클래스 맴버 (객체 없이, 클래스명으로 접근)
public:
	static int add(int n1, int n2)
	{
		return n1 + n2;
	}
	static int sub(int n1, int n2)
	{
		return n1 - n2;
	}
};

int main()
{
	Cal c1; //맴버 변수들을 저장하고 관리!

	cout << Cal::add(10, 20) << endl;
	cout << Cal::sub(20, 30) << endl;
	return 0;
}