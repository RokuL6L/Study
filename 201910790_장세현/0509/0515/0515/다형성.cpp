/*
* 1) ��ӱ���
* 2) override(������)
* 3) upcasting(����ȯ)
* 4) ����(virtual)�޼���
* 
* ��)
* ������:�Ҹ����±��, �޸���
* �����:�Ҹ����±��, �޸���


*/
#include <iostream>
using namespace std;

//��Ӽ�[����]
class Animal
{
public:
	void Sound() { cout << "" << endl; }
	void Run() { cout << "�޸���" << endl; }
};
class Dog:public Animal
{
public:
	void Sound() { cout << "�۸�" << endl; }
};

class Cat:public Animal
{
public:
	void Sound() { cout << "�߿˾߿�" << endl; }
};

int main()
{
	Dog dog; dog.Sound();
	Cat cat; cat.Sound();

	Dog* pdog = new Dog; pdog->Sound();
	Cat* pcat = new Cat; pdog->Sound();

	delete pdog;
	delete pcat;

	return 0;
}



int main()
{
	return 0;
}