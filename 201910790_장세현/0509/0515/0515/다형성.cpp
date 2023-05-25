/*
* 1) 상속구조
* 2) override(재정의)
* 3) upcasting(형변환)
* 4) 가상(virtual)메서드
* 
* 예)
* 강아지:소리내는기능, 달린다
* 고양이:소리내는기능, 달린다


*/
#include <iostream>
using namespace std;

//상속성[공통]
class Animal
{
public:
	void Sound() { cout << "" << endl; }
	void Run() { cout << "달린다" << endl; }
};
class Dog:public Animal
{
public:
	void Sound() { cout << "멍멍" << endl; }
};

class Cat:public Animal
{
public:
	void Sound() { cout << "야옹야옹" << endl; }
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