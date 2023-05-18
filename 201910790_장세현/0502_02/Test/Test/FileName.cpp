//14_컴파일러가 만들어주는 복사생성자
#include <iostream>
using namespace std;

class Member
{
	char* name;
	int  age;

public:
	Member(const char* _name, int _age)
		: age(_age)
	{
		name = new char[strlen(_name) + 1];
		strcpy_s(name, sizeof(strlen(_name) + 1), _name);
	}
	Member(const Member& m) {
		age = m.age;
		name = new char[strlen(m.name) + 1];
		strcpy_s(name, sizeof(strlen(m.name) + 1),m.name);
	}

	~Member() {
		delete[] name;
	}


public:
	void Print()
	{
		cout << name << ", " << age << endl;
	}
};

int main()
{
	Member mem1("홍길동", 10);
	mem1.Print();

	Member mem2(mem1);
	mem2.Print();

	return 0;
}