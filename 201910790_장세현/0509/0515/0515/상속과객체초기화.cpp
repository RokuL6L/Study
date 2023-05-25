//맴버 함수의 재정의
/*
* 객체초기화->자신의 생성자
*-부모로부터 물려받은 맴버 함수를 다시 정의하겠다.
* -맘에 안들어서.
* 
* 
* 접근지정자
* private:본인만
* protected:본인만+자식까지
* public:본인만+자식 +남 
*/

#include <iostream>
using namespace std;

class Person
{
	//protected:
private:
	string name;
	int age;
public:
	Person(string _name, int _age)
		:name(_name), age(_age)
	{
	}
public:
	void print() const
	{
		cout << name << "\t";
		cout << age << "\t";
	}
};

class Student :public Person
{
private:
	string major;

public:
	Student(string name, int age, string _major)
		:Person(name, age), major(_major)
	{
	}
public:
	//맴버함수 재정의(override)
	void print() const
	{
		Person::print();
		cout << major << "\t";
	}
};



int main()
{
	//객체생성(이름,나이,전공)
	Student stu("홍길동", 18, "컴퓨터");
	//stu.Person::print();
	stu.print();

	return 0;
}