#include <iostream>
using namespace std;

bool output_money(int money) {
	if (money <= 0)
		return false;
	if (money > 5000)
		return false;

	cout << "정상적인 처리" << endl;
	return true;
}
void exam1() {
	bool b = output_money(6000);
	if (b == true)
		cout << "성공" << endl;
	else
		cout << "실패(왜?)" << endl;
}

//throw를 던진 순간 해당 함수는 종료된다.
bool output_money1(int money) {
	if (money <= 0)
		throw "잘못된 금액";
	if (money > 5000)
		throw "5000원보다 많은 금액";

	cout << "정상적인 처리" << endl;
	return true;
}
void exam1_1() 
{
	try 
	{
		bool b = output_money1(500);
		cout << "성공" << endl;
	}
	catch (const char* msg) 
	{
		cout << msg << endl;
	}
	catch (int num) 
	{

	}
	catch (...) //모든 타입
	{

	}
}

int get_data2(int idx) {
	if (idx < 0 || idx >= 5)
		throw "잘못된 인덱스 범위";

	int arr[5] = { -1,0,1,2,3 };

	return arr[idx];
}
void exam2_2()
{
	try
	{
		int value = get_data2(10);
		cout << "반환 값 :" <<  value << endl;
	}
	catch (const char* msg)
	{
		cout << "[에러]" << msg << endl;
	}
	catch (int num)
	{

	}
	catch (...) //모든 타입
	{

	}
}



int get_data(int idx) {
	if (idx < 0 || idx >= 5)
		return -1;

	int arr[5] = { -1,0,1,2,3 };

	return arr[idx];
}
void exam2() {
	int value = get_data(10);
	cout << "반환 값 :" << value << endl;
}

int main() {
	//exam1();
	exam2_2();

	return 0;
}