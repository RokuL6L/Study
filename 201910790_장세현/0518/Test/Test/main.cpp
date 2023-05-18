#include <iostream>
using namespace std;

class NormalAccount {
private:
	int id;
	string name;
	int balance;
public:
	NormalAccount(int _id, string _name, int _balance)
		: id(_id), name(_name), balance(_balance)
	{
	}
	NormalAccount(int _id, string _name)
		: id(_id), name(_name), balance(0)
	{
	}
	~NormalAccount();

public:
	int get_id() const		{ return id; }
	string get_name() const { return name; }
	int get_balance() const { return balance; }

public:
	virtual bool input_money(int money) 
	{ 
		if (money <= 0)
			return false;
		
		balance += money;
		return true; 
	}
	bool output_money(int money)		
	{ 
		if (balance < money)
			return false;

		balance -= money;
		return true; 
	};

	virtual void print() const 
	{
		cout << id << "\t";
		cout << name << "\t";
		cout << balance << "원" << "\t";
	};
};

class FaithAccount : public NormalAccount {
private:

public:
	FaithAccount(int _id, string _name, int _balance)
		: NormalAccount(_id, _name, _balance + (int)(_balance * 0.01))
	{
	}
	FaithAccount(int _id, string _name)
		: NormalAccount(_id, _name)
	{
	}
public:
	bool input_money(int money) {
		if (money <= 0)
			return false;
		int temp = money + (int)(money * 0.01);


		return NormalAccount::input_money(temp);
	}
};

class ContriAccount : public NormalAccount {
private:
	int contribution;

public:
	ContriAccount(int _id, string _name, int _balance)
		: NormalAccount(_id, _name, _balance - (int)(_balance * 0.01)), 
		contribution((int)(_balance * 0.01))

	{
	}
	ContriAccount(int _id, string _name)
		: NormalAccount(_id, _name), contribution(0)
	{
	}
public:
	int get_contribution() const { return contribution; }

public:
	bool input_money(int money) {
		if (money <= 0)
			return false;

		contribution += (int)(money * 0.01);
		int temp = money - (int)(money * 0.01);

		if (NormalAccount::input_money(temp) == true) {
			contribution += (int)(money * 0.01);
			return true;
		}
		else {
			return false;
		}
	}
	void print() const {
		NormalAccount::print();
		cout << contribution << "원\t";
	}

};

int main() {
	NormalAccount* acc[3];
	acc[0] = new NormalAccount(100,"홍일반", 1000);
	acc[1] = new FaithAccount(101, "김신용", 1000);
	acc[2] = new ContriAccount(102, "박기부", 1000);

	for (int i = 0; i < 3; i++) {
		acc[i]->print();	cout << endl;
	}

	return 0;
}