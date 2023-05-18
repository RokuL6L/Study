class BankControl {
private:
	MyArr arr;

public:
	BankControl();
	~BankControl();

public:
	void account_insert();
	void account_printall();
	void account_select();
	void account_inquire();
	void account_withdraw();
	void account_delete();

private:
	int accid_to_idx(int accid);
};