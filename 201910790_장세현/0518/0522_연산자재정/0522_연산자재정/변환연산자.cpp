/*
* ��ȯ������:���ڸ� �Ѱ� �޴� �������� ����
*	Member m;
*	m=10;
*	m="ȫ�浿";
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
	Member mem("ȫ�浿", 10);
	mem = 20;
	mem = "�̱浿";

	int age = mem;
	string s = mem;

	return 0;
}