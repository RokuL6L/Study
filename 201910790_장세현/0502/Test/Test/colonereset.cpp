#include "std.h"

class Sample {
	/*
	int num1 = 10;
	int num2;
	num2 = 10;

	const int NUM;		//ERROR
	const int NUM = 10;	//�ݵ�� ����� ���� �ʱ�ȭ
	
	*/
private:
	int num1;
	const int CNUM;		//�ݵ�� �ݷ� �ʱ�ȭ

public:
	Sample() : CNUM(10) 
	{
		//CNUM = 20;		//ERROR
		num1 = 10;
	}

};

int main() {

	return 0;
}