#include "std.h"

void exam1();


int main() {
	exam1();

	return 0;
}

void exam1() {
	int* p1 = new int;		//���� int, 1�� , ������
	int* p2 = new int(4);	//���� int, 1�� , 4
	int* p3 = new int[4];	//���� int, 4��, ������

	*p1 = 1;
	p3[0] = 1;
	p3[3] = 2;

	cout << *p1 << endl;
	cout << *p2 << endl;
	cout << p3[3] << endl;

	delete p1;
	delete p2;
	delete[] p3;




}