//AccControl.c
#include "std.h"

BankControl::BankControl()
{

}

BankControl::BankControl()
{

}
void con_init()
{
	
}

void con_exit()
{

}

void BankControl::account_insert()
{
	int accid = MyLib::input_integer("���¹�ȣ");
	string name = MyLib::input_string("�̸�");
	int money = MyLib::input_integer("�Աݾ�");

	Account* acc = new Account(accid, name, money);

	if (arr.push_back(acc) == true)
		cout << "����Ǿ����ϴ�" << endl;
	else
		cout << "��������� �����մϴ�" << endl;
}

void account_printall()
{
	for (int i = 0; i < arr.get_size; i++)
	{
		Account* acc = (Account*)arr.get(i);
	}
}

void account_select()
{
	int accid = MyLib::input_integer("���¹�ȣ �Է�");
	int idx = accid_to_idx(accid);
	if (idx == -1)
	{
		cout << "���� ���¹�ȣ�Դϴ�" << endl;

	}
}

void account_inquire()
{
	int accid = MyLib::input_integer("account")
	int idx = accid_to_idx(accid);
	if (idx == -1)
	{
		cout << "���� ���¹�ȣ�Դϴ�" << endl;
	}
	else
	{
		int money
	}
}

void account_withdraw()
{
	
}

void account_delete()
{
	
}

int accid_to_idx(int accid)
{
	for (int i = 0; i < arr.get_size(); i++)
	{
		Account* acc = (Account*)arr.get(i);
		if (acc->accid == accid)
			return i;
	}
	return -1;
}
