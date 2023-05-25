#include <iostream>
using namespace std;
/*
클래스 템플릿

컬렉션 클래스(컨테이너)를 만들 때
== 데이터 저장 클래스
1)클래스 템플릿 명시 == 함수 템플릿 명시
2)클래스 이름이 변경됨(생서장 이름은 그대로) => MyArr<T>
3)맴버 함수 외부 정의시 클래스 템플릿 명시 코드를 다 추가
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

	//저장
	base[size] = value;
	size++;

	return true;
}
template<typename T>
bool MyArr<T>::erase(int idx) {
	//잘못된 인덱스 전달
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
	//잘못된 인덱스 전달
	if (idx < 0 || idx >= size)
		throw "잘못된 인덱스";

	return base[idx];
}

//int 저장
void exam1() {
	//클래스 템플릿 명시적 사용
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
//int* 저장
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
//Member 저장
void exam3() {
	MyArr<Member> arr;
	//저장
	Member mem1("홍길동", 111);
	Member mem2("김길동", 222);
	Member mem3("공길동", 333);

	arr.push_back(mem1);
	arr.push_back(mem2);
	arr.push_back(mem3);

	for (int i = 0; i < arr.get_size(); i++) {
		Member value = arr.get(i);
		value.print();
	}
	cout << endl;
}
//Member* 저장
void exam4() {
	MyArr<Member*> arr;
	//저장
	Member* mem1 = new Member("홍길동", 111);
	Member* mem2 = new Member("김길동", 222);
	Member* mem3 = new Member("공길동", 333);

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