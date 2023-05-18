#include "std.h"

Account::Account(int _accid, string _name, int _balance) 
	:accid(_accid), name(_name), balance(_balance) {

}
Account::Account(int _accid, string _name) 
	:accid(_accid), name(_name), balance(0) {

}

bool Account::input_money(int money) {
	if (money <= 0)
		return false;

	balance += money;
	return true;
}
bool Account::output_money(int money) {
	if (money <= 0)
		return false;

	if (balance < money)
		return false;

	balance -= money;		//this->balance = this->balance - money;
	return true;
}

void Account::print() const {
	cout << accid << "\t";	
	cout << name << "\t";
	cout << balance << "¿ø" << endl;
}
void Account::printIn() const {
	cout << "°èÁÂ¹øÈ£ : " << accid << endl;
	cout << "ÀÌ    ¸§ : " << name << endl;
	cout << "ÀÜ    ¾× : " << balance << endl;
}