#include "std.h"

struct Sample {
	char str[200];
	char str2[300];


}sample;


void exam1();

void samplePrint(Sample s1) {
	cout << s1.str << ", " << s1.str2 << endl;
}
// 메모리 절약, 하지만 (원본 훼손문제 -> 상수처리)
// 인자변수 const 붙일 시 원본을 수정하는 문은 에러 처리가 난다.
void samplePrint2(const Sample& s1) {

	cout << s1.str << ", " << s1.str2 << endl;
	//strcpy_s(s1.str, sizeof(s1.str), "원본변경");
}

int main() {

	sample = { "abc", "한글" };

	samplePrint(sample);

	samplePrint2(sample);
	return 0;
}

