//#include "std.h"
//
//
//class Member {
//	char* name;
//	int age;
//
//public:
//	Member() :age(0)
//	{
//		name = new char[2];
//		strcpy_s(name, sizeof(char)*2, "-");
//	}
//	Member(const char* _name, int _age) : age(_age)
//	{
//		name = new char[strlen(_name) + 1]; // **
//		strcpy_s(name, strlen(_name) + 1, _name);
//	}
//	~Member()
//	{
//		delete[] name;
//		cout << "Clear" << endl;
//	}
//public:
//	void Print()
//	{
//		cout << name << ", " << age << endl;
//	}
//};
//	/*
//class Member {
//	char name[20];
//	int age;
//
//public:
//	Member() :age(0)
//	{
//	strcpy_s(name, sizeof(name), "-");
//	}
//	Member(const char* _name, int _age) : age(_age)
//	{
//	strcpy_s(name, sizeof(name), _name);
//	}
//	~Member()
//	{
//	cout << "Clear" << endl;
//	}
//
//public:
//	void Print() 
//	{
//	cout << name << ", " << age << endl;
//	}
//};
//*/
//
//int main()
//{
//	Member mem1;
//	Member mem2("ȫ�浿", 10);
//
//	mem1.Print();
//	mem2.Print();
//
//	return 0;
//}