#include <iostream>
using namespace std;

class Cal
{
	//Ŭ���� �ɹ� (��ü ����, Ŭ���������� ����)
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
	Cal c1; //�ɹ� �������� �����ϰ� ����!

	cout << Cal::add(10, 20) << endl;
	cout << Cal::sub(20, 30) << endl;
	return 0;
}