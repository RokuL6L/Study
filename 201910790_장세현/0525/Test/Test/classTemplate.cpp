#include <iostream>
using namespace std;
/*
Ŭ���� ���ø�

�÷��� Ŭ����(�����̳�)�� ���� ��
== ������ ���� Ŭ����
1)Ŭ���� ���ø� ��� == �Լ� ���ø� ���
2)Ŭ���� �̸��� �����(������ �̸��� �״��) => MyArr<T>
3)�ɹ� �Լ� �ܺ� ���ǽ� Ŭ���� ���ø� ��� �ڵ带 �� �߰�
*/
//myarr.h
template<typename T>
class MyArr {
private:
	T base[10];
	int max;
	int size;
public:
	MyArr();
public:
	int get_size() const { return size; };

public:
	bool push_back(T value);
	bool erase(int idx);
	T get(int idx);


};
//myarr.cpp
template<typename T>
MyArr<T>::MyArr() :max(10), size(0) {
}

template<typename T>
bool MyArr<T>::push_back(T value) {
	if (max <= size)
		return false;

	//����
	base[size] = value;
	size++;

	return true;
}
template<typename T>
bool MyArr<T>::erase(int idx) {
	//�߸��� �ε��� ����
	if (idx < 0 || idx >= size)
		return false;

	for (int i = idx; i < size - 1; i++)
	{
		base[i] = base[i + 1];
	}
	size--;

	return true;
}
template<typename T>
T MyArr<T>::get(int idx) {
	//�߸��� �ε��� ����
	if (idx < 0 || idx >= size)
		throw "�߸��� �ε���";

	return base[idx];
}

//int ����
void exam1() {
	//Ŭ���� ���ø� ����� ���
	MyArr<int> arr;

	for (int i = 1; i <= 10; i++) {
		int value = i;
		arr.push_back(value);
	}

	for (int i = 0; i < arr.get_size(); i++) {
		int value = arr.get(i);
		cout << value << "\t";
	}
	cout << endl;
}
//int* ����
void exam2() {
	MyArr<int*> arr;

	for (int i = 1; i <= 10; i++) {
		int* p = new int(i);
		arr.push_back(p);
	}

	for (int i = 0; i < arr.get_size(); i++) {
		int* value = arr.get(i);
		cout << *value << "\t";
	}
	cout << endl;
}
class Member {
private:
	string name;
	int age;
public:
	Member() {
	}
	Member(string _name, int _age)
		: name(_name), age(_age) {

	}
public:
	void print() const
	{
		cout << name << "\t";
		cout << age << endl;
	}
};
//Member ����
void exam3() {
	MyArr<Member> arr;
	//����
	Member mem1("ȫ�浿", 111);
	Member mem2("��浿", 222);
	Member mem3("���浿", 333);

	arr.push_back(mem1);
	arr.push_back(mem2);
	arr.push_back(mem3);

	for (int i = 0; i < arr.get_size(); i++) {
		Member value = arr.get(i);
		value.print();
	}
	cout << endl;
}
//Member* ����
void exam4() {
	MyArr<Member*> arr;
	//����
	Member* mem1 = new Member("ȫ�浿", 111);
	Member* mem2 = new Member("��浿", 222);
	Member* mem3 = new Member("���浿", 333);

	arr.push_back(mem1);
	arr.push_back(mem2);
	arr.push_back(mem3);

	for (int i = 0; i < arr.get_size(); i++) {
		Member* value = arr.get(i);
		value->print();
	}
	cout << endl;
}

int main() {
	exam1();
	exam2();
	exam3();
	exam4();
	return 0;
}