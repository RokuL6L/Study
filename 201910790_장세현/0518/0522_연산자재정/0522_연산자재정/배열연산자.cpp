#include <iostream>
using namespace std;

class MyArr
{
private:
	int arr[5] = { 1,2,3,4,5 };

public:
	int operator[](int idx)
	{
		return arr[idx];
	}

};

int main()
{
	MyArr arr;
	int value = arr[1];
	cout << value << endl;

	arr[1] = 22; //�Լ��� L value���� ȣ��!
	return 0;
}