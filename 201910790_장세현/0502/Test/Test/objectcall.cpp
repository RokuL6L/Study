#include "std.h">

class Sample
{
public:
	Sample() 
	{
		cout <<"Sample()" << endl;
	}
	Sample(int n) {
		cout << "Sample(int)" << endl;
	}
	//家戈磊绰 ~甫 嘿牢促
	~Sample() {
		cout << "~Sampl()" << endl;
	}
};

int main() {

	//Sample s1;   //按眉 积己(胶琶) 8锅
	//Sample s2(10);	//按眉 积己(胶琶) 9锅

	//Sample arr1[5];
	//
	//Sample* p1;
	//p1 = new Sample;	//按眉 积己(赛)
	//delete p1;

	//Sample* p2 = new Sample(10);
	//delete p2;

	Sample* arr[5];
	arr[0] = new Sample;
	arr[1] = new Sample(1);

	delete arr[0];
	delete arr[1];

	return 0;
}