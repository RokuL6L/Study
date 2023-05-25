#include <iostream>
using namespace std;;

/*
T�� � Ÿ������ ó������...
1) �Ͻ��� ��� (�ַλ��)
	���� ���ڸ� ���ؼ� ����!
2) ����� ��� (�Ͻ����� �Ұ����� �� ���)
	my_max

*/

template<typename T>
T const& my_max(T const& a, T const& b) {
	return a > b ? a : b;
}

int main() {
	//�Ͻ��� ���
	cout << my_max(10, 20) << endl;
	cout << my_max('b', 'a') << endl;
	cout << my_max(11.2f, 22.3f) << endl;
	//cout << my_max(10, 10.1f) << endl;

	//����� ���
	cout << my_max<int>(10, 20) << endl;
	cout << my_max<char>('b', 'a') << endl;
	cout << my_max < float> (11.2f, 22.3f) << endl;
	cout << my_max<float>(10, 10.1f) << endl;


	return 0;
}