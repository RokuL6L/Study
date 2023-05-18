#include <iostream>
using namespace std;

/*
다형성
1) 상속구조
2) 재정의(override)
3) 업캐스팅				: 부모* = &자식
4) 가상멤버함수
*/

class Animal {


public:
	virtual void Cry() { cout << "........" << endl; }
	void Run() { cout << "달린다" << endl; }
};

class Cat : public Animal {
public:
	void Cry() { cout << "냐옹 냐옹" << endl; }
};

class Lion : public Animal {
public:
	void Cry() { cout << "어흥 어흥" << endl; }
};

class Pig : public Animal {
public:
	void Cry() { cout << "꿀 꿀" << endl; }
};

class Dog :  public Animal {
public:
	void Cry() { cout << "멍 멍" << endl; }
};

int main() {
	Dog dog;		dog.Cry();
	Cat cat;		cat.Cry();

	//업캐스팅		자식을 부모에게 대입 (소년가장....
	Animal* ani = new Dog;

	Animal* anis[4]; /*= { new Dog, new Cat, new Cat, new Dog };*/

	anis[0] = new Dog;
	anis[1] = new Cat;
	anis[2] = new Pig;
	anis[3] = new Lion;

	for (int i = 0; i < 4; i++) {
		anis[i]->Cry();
	}
	//Animal* dogs[] = { new Dog, new Dog};
	//Animal* cats[] = { new Cat, new Cat };
	



	return 0;
}