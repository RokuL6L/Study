#include <iostream>
using namespace std;

class Sample
{
private:
	static int s_num1;
	const int num4 = 10;
	int num1;

public:
	Sample(int n1, int n2):num4(n1), num1(n2)
	{
	}
public:
	void Print()
	{
		cout << s_num1 << "\t";
		cout << num4 << "\t";
		cout << num1 << endl;
	}
};

int Sample::s_num1 = 1;

int main()
{
	Sample s1(1,2);
	Sample s2(3, 5);
	s1.Print();
	s2.Print();

	cout << sizeof(Sample) << endl;
	cout << sizeof(s1) << endl;

	return 0;
}