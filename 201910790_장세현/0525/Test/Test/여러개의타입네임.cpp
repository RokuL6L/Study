#include <iostream>

using namespace std;

template<typename T1, typename T2>
T2 my_max(T1 a, T2 b) {
	return a > b ? a : b;
}

template<typename T1, typename T2, typename T3>
T3 my_min(T1 a, T2 b) {
	return a < b ? a : b;
}

int main() {
	cout << my_max(10, 10.5f) << endl;

	cout << my_max(10, 20) << endl;

	//cout << my_min(11.1, 10) << endl;
	cout << my_min<float, int, float>(11.1, 10) << endl;
	return 0;
}