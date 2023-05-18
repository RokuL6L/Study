#include "std.h"

BankControl::BankControl() {

}
BankControl::~BankControl() {

}

void BankControl::account_insert() {
	int accid;
	string name;
	int money;

	accid = MyLib::input_integer("���¹�ȣ");
	name = MyLib::input_string("�̸�");
	money = MyLib::input_integer("�Աݾ�");

	//2. ������ Ÿ�� ���� ���� �� �ʱ�ȭ
	Account* acc = new Account(accid, name, money);

	//3. ���� ��û �� ��� ���
	if (arr.push_back(acc) == 1)
		cout << "����Ǿ����ϴ�." << endl;
	else
		cout << "���� ������ �����մϴ�." << endl;
}
void BankControl::account_printall() {

	for (int i = 0; i < arr.get_size(); i++)
	{
		Account* acc = (Account*)arr.get(i);
		acc->print();
	}
	cout << endl;
}
void BankControl::account_select() {
	int accid;
	accid = MyLib::input_integer("���¹�ȣ");


	int idx = accid_to_idx(accid);

	if (idx == -1)
	{
		cout << "���� ���¹�ȣ�Դϴ�." << endl;
	}
	else
	{
		Account* acc = (Account*)arr.get(idx);
		acc->printIn();
	}
}
void BankControl::account_inquire() {
	int accid = MyLib::input_integer("���¹�ȣ");

	int idx = accid_to_idx(accid);

	if (idx == -1)
	{
		printf("���� ���¹�ȣ�Դϴ�\n");
	}
	else
	{
		int money = MyLib::input_integer("�Ա� ��");

		Account* acc = (Account*)arr.get(idx);
		if (acc->input_money(money) == 1)
			printf("�Աݼ���\n");
		else
			printf("�Աݽ���\n");
	}
}
void BankControl::account_withdraw() {
	int accid = MyLib::input_integer("���¹�ȣ");

	int idx = accid_to_idx(accid);

	if (idx == -1)
	{
		printf("���� ���¹�ȣ�Դϴ�\n");
	}
	else
	{
		int money = MyLib::input_integer("��� ��");

		Account* acc = (Account*)arr.get(idx);
		if (acc->input_money(money) == 1)
			printf("��ݼ���\n");
		else
			printf("��ݽ���\n");
	}
}
void BankControl::account_delete() {
	int accid = MyLib::input_integer("���¹�ȣ");

	int idx = accid_to_idx(accid);

	if (idx == -1)
	{
		cout << "���� ���¹�ȣ�Դϴ�." << endl;
	}
	else
	{
		arr.erase(idx);
		cout << "�����Ǿ����ϴ�" << endl;
	}
}

int BankControl::accid_to_idx(int accid) {
	for (int i = 0; i < arr.get_size(); i++)
	{
		Account* acc = (Account*)arr.get(i);
		if (acc->get_accid() == accid) {
			return i;
		}
	}
	return -1;
}