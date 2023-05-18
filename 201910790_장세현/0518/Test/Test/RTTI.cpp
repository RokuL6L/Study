#include <iostream>
using namespace std;
/*
RTTI (RunTime Type Information) 실시간 타입 정보

다운 캐스팅
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

class Dog : public Animal {
public:
	void Fun() { cout << "강아지만의 기능" << endl; }
	void Cry() { cout << "멍 멍" << endl; }
};


void exam() {
	Animal* ani = new Dog;
	ani->Run();
	ani->Cry();
	//ani->Fun(); 에러
	//다운캐스팅 (강제형변환)
	Dog* pdog = (Dog*)ani;
	pdog->Fun();

	Cat* pcat = (Cat*)ani;
	pcat->Cry();

	//다운캐스팅 (C++ 연산자 지원)
	Dog* pdog1 = dynamic_cast<Dog*>(ani);
	if (pdog1 != NULL) {
		cout << "강아지" << endl;
	}
	else {
		cout << "강아지가 아니다" << endl;
	}

	Cat* pcat1 = dynamic_cast<Cat*>(ani);
	if (pcat1 != NULL) {
		cout << "고양이" << endl;
	}
	else {
		cout << "고양이가 아니다" << endl;
	}


}

void exam2() {
	//특정 동물 필터링
	Animal* ani[4];
	ani[0] = new Dog;
	ani[1] = new Cat;
	ani[2] = new Lion;
	ani[3] = new Pig;

	cout << "전체 동물들이 소리를 낸다" << endl;

	for (int i = 0; i < 4; i++) {
		ani[i]->Cry();
	}

	cout << "\n강아지만 소리를 낸다." << endl;

	for (int i = 0; i < 4; i++) {
		Dog* p = dynamic_cast<Dog*>(ani[i]);
		if (p != NULL) {
			ani[i]->Cry();
		}
	}
}

int main() {
	exam2();
	return 0;
}