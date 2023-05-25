//�ɹ� �Լ��� ������
/*
* ��ü�ʱ�ȭ->�ڽ��� ������
*-�θ�κ��� �������� �ɹ� �Լ��� �ٽ� �����ϰڴ�.
* -���� �ȵ�.
* 
* 
* ����������
* private:���θ�
* protected:���θ�+�ڽı���
* public:���θ�+�ڽ� +�� 
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
	//�ɹ��Լ� ������(override)
	void print() const
	{
		Person::print();
		cout << major << "\t";
	}
};



int main()
{
	//��ü����(�̸�,����,����)
	Student stu("ȫ�浿", 18, "��ǻ��");
	//stu.Person::print();
	stu.print();

	return 0;
}