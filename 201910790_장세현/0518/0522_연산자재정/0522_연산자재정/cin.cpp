#include <iostream>
using namespace std;
void exam1()
{
	//int num;
	//cin >> num;

	string str1;
	cout << "���ڿ� �Է�:";
	//cin >> str1;
	cin>>str1; //scanf_s
	cout << str1<<endl;

	cin.ignore();

	char name[20];
	cout << "empty";
	cin.getline(name, sizeof(name));
	cout << name<<endl;
}

int input_integer(string msg)
{
	int value;
	while (true)
	{
		cout << msg << ":";
		cin >> value;
		if (cin)
		{
			break;
		}
		else {
			cin.clear();
		}
	}
	return value;
}
void exam2()
{
	int num = input_integer("�����Է�");
	cout << "���:" << num << endl;
}
int main()
{
	exam1();

	return 0;
}