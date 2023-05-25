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
		:year(y), month(m), day(d)
	{
	}
public:
	void print() const
	{
		cout << year << "-";
		cout << month << "-";
		cout << day << endl;
	}

	bool operator==(const MyDate& d)
	{
		if (year == d.year && month == d.month && day == d.day)
			return true;
		else
			return false;
	}
	MyDate operator++()
	{
		day++;
		return *this;
	}

	MyDate operator++(int dummy)
	{
		MyDate temp = *this;
		day++;
		return temp;
	}
};

int main()
{
	MyDate d1(2023, 5, 22); d1.print();
	MyDate d2(2023, 5, 22); d2.print();

	if (d1 == d2)
		cout << "동일날짜" << endl;
	else
		cout << "다른날짜" << endl;

	MyDate d3 = ++++++d1;
	d1.print();
	d3.print();

	MyDate d4 = d1++; 
	d1.print();
	d4.print();

	return 0;
}