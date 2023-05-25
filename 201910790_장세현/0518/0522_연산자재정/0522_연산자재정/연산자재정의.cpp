/*
* 사용자 정의타입도 연산자를 사용할 수 있도록 하기 위함
* why? 사용자 정의타입도 기본형타입과 비슷한 문장을
* 작성할 수 있도록 하기 위함
* 
* c1+c2;
* 방법1) 맴버함수형태 c1.operator+(c2);
* operator+(const Complex &c);
* 방법2) 전역함수형태 operator+(c1,c2);
* operator+(const Complex &c1, const Complex &c2);
*/
#include<iostream>
using namespace std;

//복소수(3+2i)
class Complex
{
private:
	int real;
	int image;

public:
	Complex(int _real, int _image)
		:real(_real), image(_image)
	{
	}
public:
	void print() const
	{
		cout << real << "+" << image << "i" << endl;
	}

	Complex Add(const Complex& c) //객체 생성X
	{
		int r = real + c.real;
		int i = image + c.image;
		return Complex(r, i);
	}
	Complex operator+(const Complex& c) //객체 생성X
	{
		int r = real + c.real;
		int i = image + c.image;
		return Complex(r, i);
	}
	friend Complex operator- (const Complex& c1, const Complex& c2)
	{
		int r = c1.real - c2.real;
		int i = c1.image - c2.image;

		return Complex(r, i);
	}
};

int main()
{
	Complex c1(1, 2);	c1.print(); //1+2i

	Complex c2(3, 4);	c2.print(); //3+4i

	Complex c3 =c1.Add(c2); c3.print();

	Complex c4 = c1 + c2;	//c1.operator+(c2);
	c4.print();

	Complex c5 = c2 - c2;	//c1.operator+(c2);
	c5.print();


	return 0;			
}