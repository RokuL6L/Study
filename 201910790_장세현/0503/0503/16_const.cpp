//16_const ���
/*
�ɹ� �ʵ�(������) : ��� �ɹ� �ʵ�
					- ���� ����x
					- �ݵ�� ����� ���ÿ� �ʱ�ȭ
�ɹ� �Լ�			: ��� �ɹ� �Լ�
						-�ɹ� ���� ���� x
						-��� �ɹ� �Լ��� ȣ�� ����
*/
#include <iostream>
using namespace std;

class Sample
{
private:
	int num1=10; //�ɹ� ����
	const int num2=20; //�ɹ� ���

public:
	Sample(int n1, int n2)
		: num1(n1), num2(n2) //�ݷ� �ʱ�ȭ ����
	{
		num1 = 30;
		//num2 = 30;
	}
};

int main()
{
	Sample s1(10, 20);
	return 0;
}


