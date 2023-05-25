#include <iostream>
using namespace std;

//���� �迭���� ������ �˻�
//int* my_find(int* start, int* end, int value) {
//	for (; start != end; start++) {
//		if (*start == value)
//			return start;
//	}
//	return start; //return end;
//}

//Ÿ�� ������� ���
template<typename T1, typename T2>
T1 my_find(T1 start, T1 end, T2 value) {
	for (; start != end; start++) {
		if (*start == value)
			return start;
	}
	return start; //return end;
}

int main() {

#pragma region intPart
	int arr[] = { 1, 4, 12, 52, 23, 5 };

	//����(1st ~ 2nd), 3rd : �ΰ�����
	int* p = my_find(arr, arr + 6, 12);

	if (p == arr + 6) cout << "����" << endl;
	else	cout << *p << endl;

	//return 0;
#pragma endregion

#pragma region charPart
	char arr1[] = { 'a', 'b', 'c', 'd', 'e', 'f'};

	//����(1st ~ 2nd), 3rd : �ΰ�����
	char* p1 = my_find(arr1, arr1 + 6, 'd');

	if (p1 == arr1 + 6) cout << "����" << endl;
	else	cout << *p1 << endl;

	return 0;
#pragma endregion


}
