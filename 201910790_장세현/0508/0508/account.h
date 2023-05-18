#include "std.h"

class Account
{
private:
	int accid;
	string name;
	int balance;

public:
	Account(int _accid, string _name, int _balance);
	Account(int _accid, string _name);

public:
	Account(int _accid, string _name, int _balance);
	Account(int _accid, string _name, int _balance);

public:
	bool input_money(int money);
	bool output_money(int money);
	void print() const;
	void printin() const;

};

