#include "std.h"

BankControl::BankControl() {

}
BankControl::~BankControl() {

}

void BankControl::account_insert() {
	int accid;
	string name;
	int money;

	accid = MyLib::input_integer("계좌번호");
	name = MyLib::input_string("이름");
	money = MyLib::input_integer("입금액");

	//2. 저장할 타입 변수 선언 및 초기화
	Account* acc = new Account(accid, name, money);

	//3. 저장 요청 및 결과 출력
	if (arr.push_back(acc) == 1)
		cout << "저장되었습니다." << endl;
	else
		cout << "저장 공간이 부족합니다." << endl;
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
	accid = MyLib::input_integer("계좌번호");


	int idx = accid_to_idx(accid);

	if (idx == -1)
	{
		cout << "없는 계좌번호입니다." << endl;
	}
	else
	{
		Account* acc = (Account*)arr.get(idx);
		acc->printIn();
	}
}
void BankControl::account_inquire() {
	int accid = MyLib::input_integer("계좌번호");

	int idx = accid_to_idx(accid);

	if (idx == -1)
	{
		printf("없는 계좌번호입니다\n");
	}
	else
	{
		int money = MyLib::input_integer("입금 액");

		Account* acc = (Account*)arr.get(idx);
		if (acc->input_money(money) == 1)
			printf("입금성공\n");
		else
			printf("입금실패\n");
	}
}
void BankControl::account_withdraw() {
	int accid = MyLib::input_integer("계좌번호");

	int idx = accid_to_idx(accid);

	if (idx == -1)
	{
		printf("없는 계좌번호입니다\n");
	}
	else
	{
		int money = MyLib::input_integer("출금 액");

		Account* acc = (Account*)arr.get(idx);
		if (acc->input_money(money) == 1)
			printf("출금성공\n");
		else
			printf("출금실패\n");
	}
}
void BankControl::account_delete() {
	int accid = MyLib::input_integer("계좌번호");

	int idx = accid_to_idx(accid);

	if (idx == -1)
	{
		cout << "없는 계좌번호입니다." << endl;
	}
	else
	{
		arr.erase(idx);
		cout << "삭제되었습니다" << endl;
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