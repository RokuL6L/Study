#include <iostream>
using namespace std;
/*
RTTI (RunTime Type Information) �ǽð� Ÿ�� ����

�ٿ� ĳ����
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

class Dog : public Animal {
public:
	void Fun() { cout << "���������� ���" << endl; }
	void Cry() { cout << "�� ��" << endl; }
};


void exam() {
	Animal* ani = new Dog;
	ani->Run();
	ani->Cry();
	//ani->Fun(); ����
	//�ٿ�ĳ���� (��������ȯ)
	Dog* pdog = (Dog*)ani;
	pdog->Fun();

	Cat* pcat = (Cat*)ani;
	pcat->Cry();

	//�ٿ�ĳ���� (C++ ������ ����)
	Dog* pdog1 = dynamic_cast<Dog*>(ani);
	if (pdog1 != NULL) {
		cout << "������" << endl;
	}
	else {
		cout << "�������� �ƴϴ�" << endl;
	}

	Cat* pcat1 = dynamic_cast<Cat*>(ani);
	if (pcat1 != NULL) {
		cout << "�����" << endl;
	}
	else {
		cout << "����̰� �ƴϴ�" << endl;
	}


}

void exam2() {
	//Ư�� ���� ���͸�
	Animal* ani[4];
	ani[0] = new Dog;
	ani[1] = new Cat;
	ani[2] = new Lion;
	ani[3] = new Pig;

	cout << "��ü �������� �Ҹ��� ����" << endl;

	for (int i = 0; i < 4; i++) {
		ani[i]->Cry();
	}

	cout << "\n�������� �Ҹ��� ����." << endl;

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