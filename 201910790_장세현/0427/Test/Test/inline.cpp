#include "std.h"

#define BEGIN	{
#define END		}
#define PRINT(X)	printf("%d",X)

#define ADD(X,Y)	X+Y
#define MUL(X,Y)	(X)*(Y)

void exam1() {
	BEGIN
		PRINT(10);
	END
}

void exam2() {
	cout << ADD(10, 20) << endl;
	cout << ADD(10.12, 20.32) << endl;
	cout << MUL(10, 20) << endl;
	cout << MUL(5+1, 3+1) << endl;

}
//C++���� ��ũ�� �Լ� ��� X
//��� �ζ����Լ����
inline int Add(int x, int y) { return x + y; }

int main() {
	exam2();

	return 0;
}