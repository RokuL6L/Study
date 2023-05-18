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
	std::cout << "문자열" << "," << 10 << endl;
	cout << a << endl;
}
void exam2() {
	char name[20];
	int age;
	char gender;
	float weight;
	char dummy;

	cout << "이름 : ";		std::cin >> name;
	cout << "나이 : ";		std::cin >> age;
	cout << "성별 : ";		std::cin >> gender;
	//std::cin >> dummy;
	cout << "몸무게 : ";	std::cin >> weight;

	cout << "\n\n[입력결과]" << endl;

	cout << "이름 -> " << name << endl;	
	cout << "나이 -> " << age << endl;	
	cout << "성별 -> " << gender << endl;	
	cout << "몸무게 -> " << weight << endl;
}

void exam3() {


}

