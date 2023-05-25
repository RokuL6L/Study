#include <iostream>
using namespace std;;

/*
T를 어떤 타입으로 처리할지...
1) 암시적 방법 (주로사용)
	절단 인자를 통해서 결정!
2) 명시적 방법 (암시적아 불가능할 때 사용)
	my_max

*/

template<typename T>
T const& my_max(T const& a, T const& b) {
	return a > b ? a : b;
}

int main() {
	//암시적 방법
	cout << my_max(10, 20) << endl;
	cout << my_max('b', 'a') << endl;
	cout << my_max(11.2f, 22.3f) << endl;
	//cout << my_max(10, 10.1f) << endl;

	//명시적 방법
	cout << my_max<int>(10, 20) << endl;
	cout << my_max<char>('b', 'a') << endl;
	cout << my_max < float> (11.2f, 22.3f) << endl;
	cout << my_max<float>(10, 10.1f) << endl;


	return 0;
}