#include <iostream>;
using namespace std;
/*
����κ��� ���� �θ� �ʿ�
*/


//�ڵ����� �߻�Ŭ������ ��
class Animal {

//���������Լ�(�߻�޼���, �̿ϼ�)
public:
	virtual void Cry() = 0;
	void Run() { cout << "�޸���" << endl; }
};

//�߻�Ŭ������ �θ�� �� �ڽ���
//�ݵ�� ���������Լ��� �������ؾ� �Ѵ�
//���� �� ���ε� �߻�Ŭ������ �Ǿ� ��ü���� �Ұ�
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

int main() {

	//�߻� Ŭ���� = ��ü ���� �Ұ�

	Animal* p = new Dog;
	p->Cry();


	return 0;
}
