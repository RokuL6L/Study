/*
* �� ���� ������ ���޹޾� ū ���� ��ȯ
����, ����, �Ǽ�, ���ڿ�
*/
#include <iostream>
using namespace std;

int my_max(int n1, int n2)
{
	if (n1 > n2)
		return n1;
	else
		return n2;
}

int main()
{
	cout << my_max(10, 20) << endl;
	return 0;
}