#include "std.h"

int arr[5] = { 1,2,3,4,5 };

int get_data1(int idx) { return arr[idx]; }
int& get_data2(int idx) { return arr[idx]; }

int main() {
	int value1 = get_data1(1);
	int value2 = get_data2(1);
	cout << get_data1(1) << endl;
	cout << get_data2(1) << endl;

	//get_data1(1) = 10;  // 2 = 10;
	get_data2(1) = 20;    // arr[1] = 20;




	cout << get_data2(1) << endl;
	return 0;
}