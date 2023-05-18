
#include "std.h"

Account::Account(int _accid, string _name, int _balance)
    :accid(_accid), name(_name), balance(_balance)
{

}
Account::Account(int _accid, string _name)
    :accid(_accid), name(_name), balance(0)
{

}

bool Account::input_money(int money)
{
    if (money <= 0)
        return false;

    //this->balance = this->balance + money;
    balance = balance + money;    //보통은 이렇게 쓴다
    return true;
}

bool Account::output_money(int money)
{
    if (money <= 0)
        return false;

    if (balance < money)
        return false;
    balance = balance - money;
    return true;
}
void Account::print() const
{
    cout << accid << "\t";
    cout << name << "\t";
    cout << balance << "원" << endl;
}
void Account::printin() const
{
    cout << "계좌번호 :" << accid << endl;
    cout << "이    름 :" << name << endl;
    cout << "잔    액 :" << balance << "원" << endl;
}
