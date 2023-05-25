//05_다형성
/*
* 강아지2마리
* 고양이2마리
* 나중에 호랑이, 토끼, 사자
*/


#include <iostream>
using namespace std;

class Animal
{
public:
	void Sound() { cout << "" << endl; }
	void Run() { cout << "달린다" << endl; }
};
class Dog :public Animal
{
public:
	void Sound() { cout << "멍멍" << endl; }
};

class Cat :public Animal
{
public:
	void Sound() { cout << "야옹야옹" << endl; }
};

int main()
{
	Dog* pdog[2];
	Cat* pcat[2];

	pdog[0] = new Dog;
	pdog[1] = new Dog;
	pcat[0] = new Cat;
	pcat[1] = new Cat;

	//업캐스팅!부모*=&자식;
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