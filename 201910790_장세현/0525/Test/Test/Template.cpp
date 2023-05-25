#include <iostream>
using namespace std;

int  my_max(int a, int b) {
	if (a > b)
		return a;
	else b;
}

char  my_max(char a, char b) {
	if (a > b)
		return a;
	else b;
}
float  my_max(float a, float b) {
	if (a > b)
		return a;
	else b;
}
int main() {
	cout << my_max(10, 20) << endl;
	cout << my_max('b', 'a') << endl;
	cout << my_max(11.2f, 22.3f) << endl;

	return 0;
}