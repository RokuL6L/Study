#include <iostream>
using namespace std;

class Person {
	//protected ����� ���� ������ ���
private:
	string name;
	int age;
	
public:
	Person(string _name, int _age) 
		: name(_name), age(_age)
	{

	}
public :
	void print() const {
		cout << name << "\t";
		cout << age << "\t";
	}
};

class Student : public Person 
{
private:
	string major;
public:
	Student(string name, int age, string _major) 
		: Person(name, age), major(_major)
	{
	}
public:
	void print() const {
		//Person::print();
		cout << major << "\t";
	}
};

int main() {
	Student stu("ȫ�浿", 10, "��ǻ��");

	stu.print();
	stu.Person::print();
	return 0;
}
