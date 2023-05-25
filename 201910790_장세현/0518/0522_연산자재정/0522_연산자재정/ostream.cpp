#include<stdio.h>

namespace mystd
{
	myostream& operator<<(int value){}
	myostream& operator<<(const char* value){}
	myostream& operator<<(const)
	myostream mycout;
}
//----------------------------------------------
using namespace mystd;

#include <iostream>
using namespace std;

ostream& mytab(ostream& o)
{
	o << "\t";
	return o;
}

int main()
{
	mycout << 10<<myend;
	mycout << "hello"<<myend;
	mycout << 10<< "hello"<<myend;

	return 0;
}