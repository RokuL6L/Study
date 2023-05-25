#include <iostream>
using namespace std;

template<typename T>
T const& my_max(T const& a, T const& b) {
	return a > b ? a : b;
}

int main() {
	cout << my_max(10, 20) << endl;
	cout << my_max('b', 'a') << endl;
	cout << my_max(11.2f, 22.3f) << endl;

	return 0;
}