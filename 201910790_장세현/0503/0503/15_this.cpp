//15_this������
//��ü �ڽ��� �ּҸ� �����ϰ� �ִ� ������
//��� �Լ����ο��� ��밡��
//-��� �Լ� ȣ��� �ڵ����� ����
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
	Sample s1; //��ü ����
	cout << &s1 << endl; //��ü �ּ� ���
	s1.fun();

	return 0;
}
