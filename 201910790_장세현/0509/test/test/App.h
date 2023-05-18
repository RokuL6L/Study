class App {
private:
	BankControl control;
public:
	App();
	~App();
public:
	void init();
	void run();
	void exit();

private:
	char menuprint();


};