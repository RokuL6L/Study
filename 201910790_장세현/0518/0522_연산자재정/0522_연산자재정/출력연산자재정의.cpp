#include <iostream>
using namespace std;

class MyDate
{
private:
	int year;
	int month;
	int day;
public:
	MyDate(int y, int m, int d)
	{

	}
public:
	void print() const
	{

	}
	friend ostream& operator<<(ostream& o, MyDate& d)
	{
		o << d.year << "-";
		o << d.month << "-";
		o << d.day;

		return o;
	}
};



int main()
{
	MyDate d1(2023, 5, 22);
	d1.print();

	cout << d1;

	return 0;

}