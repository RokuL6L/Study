/*
* 변환생성자:인자를 한개 받는 생성자의 형태
*	Member m;
*	m=10;
*	m="홍길동";
*/
#include <iostream>
using namespace std;

class Member
{
private:
	string name;
	int age;
public:
	Member(string n, int a)
		:name(n), age(a)
	{
	}
	Member(int a)
	{
		age = a;
	}
	Member(const char* s)
	{
		name = s;
	}
	explicit Member(const char* s)
	{
		name = s;
	}
public:
	operator int()
	{
		return age;
	}
	operator string()
	{
		return name;
	}
};

int main()
{
	Member mem("홍길동", 10);
	mem = 20;
	mem = "이길동";

	int age = mem;
	string s = mem;

	return 0;
}