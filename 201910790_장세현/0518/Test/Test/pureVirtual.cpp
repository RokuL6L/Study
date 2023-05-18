#include <iostream>;
using namespace std;
/*
공통부분을 갖는 부모가 필요
*/


//자동으로 추상클래스로 됨
class Animal {

//순수가상함수(추상메서드, 미완성)
public:
	virtual void Cry() = 0;
	void Run() { cout << "달린다" << endl; }
};

//추상클래스를 부모로 둔 자식은
//반드시 순수가상함수를 재정의해야 한다
//안할 시 본인도 추상클래스가 되어 객체생성 불가
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

class Dog : public Animal {
public:
	void Fun() { cout << "강아지만의 기능" << endl; }
	void Cry() { cout << "멍 멍" << endl; }
};

int main() {

	//추상 클래스 = 객체 생성 불가

	Animal* p = new Dog;
	p->Cry();


	return 0;
}
