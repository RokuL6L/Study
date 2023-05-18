#include "std.h"

void foo(int n1, char n2 = 'A', int n3 = 10) {
	cout << n1 << "\t";
	cout << n2 << "\t";
	cout << n3 << endl;
}


int main() {

	foo(1,'a',3);
	foo(10);
	return 0;
}