#include "std.h"

void exam1();
void exam2();
void exam3();

int main() {

	exam2();

	return 0;
}

void exam1() {
	int a = 10;
	
	std::cout << "Hello, World!\n" << std::endl;
	std::cout << "���ڿ�" << "," << 10 << endl;
	cout << a << endl;
}
void exam2() {
	char name[20];
	int age;
	char gender;
	float weight;
	char dummy;

	cout << "�̸� : ";		std::cin >> name;
	cout << "���� : ";		std::cin >> age;
	cout << "���� : ";		std::cin >> gender;
	//std::cin >> dummy;
	cout << "������ : ";	std::cin >> weight;

	cout << "\n\n[�Է°��]" << endl;

	cout << "�̸� -> " << name << endl;	
	cout << "���� -> " << age << endl;	
	cout << "���� -> " << gender << endl;	
	cout << "������ -> " << weight << endl;
}

void exam3() {


}

