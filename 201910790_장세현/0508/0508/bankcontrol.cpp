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
	int accid = MyLib::input_integer("계좌번호");
	string name = MyLib::input_string("이름");
	int money = MyLib::input_integer("입금액");

	Account* acc = new Account(accid, name, money);

	if (arr.push_back(acc) == true)
		cout << "저장되었습니다" << endl;
	else
		cout << "저장공간이 부족합니다" << endl;
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
	int accid = MyLib::input_integer("계좌번호 입력");
	int idx = accid_to_idx(accid);
	if (idx == -1)
	{
		cout << "없는 계좌번호입니다" << endl;

	}
}

void account_inquire()
{
	int accid = MyLib::input_integer("account")
	int idx = accid_to_idx(accid);
	if (idx == -1)
	{
		cout << "없는 계좌번호입니다" << endl;
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
