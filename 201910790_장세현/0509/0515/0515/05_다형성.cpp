//05_������
/*
* ������2����
* �����2����
* ���߿� ȣ����, �䳢, ����
*/


#include <iostream>
using namespace std;

class Animal
{
public:
	void Sound() { cout << "" << endl; }
	void Run() { cout << "�޸���" << endl; }
};
class Dog :public Animal
{
public:
	void Sound() { cout << "�۸�" << endl; }
};

class Cat :public Animal
{
public:
	void Sound() { cout << "�߿˾߿�" << endl; }
};

int main()
{
	Dog* pdog[2];
	Cat* pcat[2];

	pdog[0] = new Dog;
	pdog[1] = new Dog;
	pcat[0] = new Cat;
	pcat[1] = new Cat;

	//��ĳ����!�θ�*=&�ڽ�;
	Animal* ans[4];
	ans[0] = new Dog;
	ans[1] = new Dog;
	ans[2] = new Dog;
	ans[3] = new Dog;

	for (int i = 0; i < 4; i++)
	{
		ans[i]->Run();
		ans[i]->Sound();
	}

	return 0;
}