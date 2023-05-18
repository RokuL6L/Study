class Account {
private:
	int accid;
	string name;
	int balance;

public:
	Account(int _accid, string _name, int _balance);
	Account(int _accid, string _name);

public:
	bool input_money(int money);
	bool output_money(int money);

public :
	void print() const;
	void printIn() const;

public:
	int get_accid() const { return accid; };

};