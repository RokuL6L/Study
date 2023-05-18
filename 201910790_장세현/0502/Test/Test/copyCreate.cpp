#include <iostream>
using namespace std;
/*
복사생성자 : 컴파일러가 자동으로 만들어 준다.
			 일반 생성자 유무와 관계없다.
			 기능이 있다 : 맴버변수의 값이 복사된다.
*/
class Sample 
{
public:
	//Sample() { cout << "Sample()" << endl; }
	//~Sample() { cout << "~Sample()" << endl; }

};

int main() {
	//Sample s1;
	//Sample s2(s1); //자신과 동일한 객체가 생성 ( 복사생성자 호출)
	return 0;
}