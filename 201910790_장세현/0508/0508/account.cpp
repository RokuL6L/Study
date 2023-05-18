
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
    balance = balance + money;    //������ �̷��� ����
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
    cout << balance << "��" << endl;
}
void Account::printin() const
{
    cout << "���¹�ȣ :" << accid << endl;
    cout << "��    �� :" << name << endl;
    cout << "��    �� :" << balance << "��" << endl;
}
