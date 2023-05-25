#include <iostream>
using namespace std;



class Complex {
private:
	int real;
	int image;
public:
	Complex(int _real, int _image) 
		: real(_real), image(_image){

	}
public:

	Complex Add(const Complex& c) {
		int r = real + c.real;
		int i = image + c.image;
		return Complex(r, i);
	}
	Complex operator+(const Complex& c) {
		int r = real + c.real;
		int i = image + c.image;
		return Complex(r, i);
	}
	void print() const{
		cout << real << "\t";
		cout << image << endl;
	}

};

int main() {
	Complex c1(1, 2);	c1.print();
	Complex c2(3, 4);	c2.print();
	Complex c3 = c1.Add(c2);
	c3.print();


	return 0;
}