#include <iostream>
using namespace std;

/*
������
1) ��ӱ���
2) ������(override)
3) ��ĳ����				: �θ�* = &�ڽ�
4) �������Լ�
*/

class Animal {


public:
	virtual void Cry() { cout << "........" << endl; }
	void Run() { cout << "�޸���" << endl; }
};

class Cat : public Animal {
public:
	void Cry() { cout << "�Ŀ� �Ŀ�" << endl; }
};

class Lion : public Animal {
public:
	void Cry() { cout << "���� ����" << endl; }
};

class Pig : public Animal {
public:
	void Cry() { cout << "�� ��" << endl; }
};

class Dog :  public Animal {
public:
	void Cry() { cout << "�� ��" << endl; }
};

int main() {
	Dog dog;		dog.Cry();
	Cat cat;		cat.Cry();

	//��ĳ����		�ڽ��� �θ𿡰� ���� (�ҳⰡ��....
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