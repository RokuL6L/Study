#include <iostream>
using namespace std;

bool output_money(int money) {
	if (money <= 0)
		return false;
	if (money > 5000)
		return false;

	cout << "�������� ó��" << endl;
	return true;
}
void exam1() {
	bool b = output_money(6000);
	if (b == true)
		cout << "����" << endl;
	else
		cout << "����(��?)" << endl;
}

//throw�� ���� ���� �ش� �Լ��� ����ȴ�.
bool output_money1(int money) {
	if (money <= 0)
		throw "�߸��� �ݾ�";
	if (money > 5000)
		throw "5000������ ���� �ݾ�";

	cout << "�������� ó��" << endl;
	return true;
}
void exam1_1() 
{
	try 
	{
		bool b = output_money1(500);
		cout << "����" << endl;
	}
	catch (const char* msg) 
	{
		cout << msg << endl;
	}
	catch (int num) 
	{

	}
	catch (...) //��� Ÿ��
	{

	}
}

int get_data2(int idx) {
	if (idx < 0 || idx >= 5)
		throw "�߸��� �ε��� ����";

	int arr[5] = { -1,0,1,2,3 };

	return arr[idx];
}
void exam2_2()
{
	try
	{
		int value = get_data2(10);
		cout << "��ȯ �� :" <<  value << endl;
	}
	catch (const char* msg)
	{
		cout << "[����]" << msg << endl;
	}
	catch (int num)
	{

	}
	catch (...) //��� Ÿ��
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
	cout << "��ȯ �� :" << value << endl;
}

int main() {
	//exam1();
	exam2_2();

	return 0;
}