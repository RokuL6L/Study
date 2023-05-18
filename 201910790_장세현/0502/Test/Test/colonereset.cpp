#include "std.h"

class Sample {
	/*
	int num1 = 10;
	int num2;
	num2 = 10;

	const int NUM;		//ERROR
	const int NUM = 10;	//반드시 선언과 동시 초기화
	
	*/
private:
	int num1;
	const int CNUM;		//반드시 콜론 초기화

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