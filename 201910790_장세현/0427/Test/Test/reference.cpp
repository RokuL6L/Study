#include "std.h"

struct Sample {
	char str[200];
	char str2[300];


}sample;


void exam1();

void samplePrint(Sample s1) {
	cout << s1.str << ", " << s1.str2 << endl;
}
// �޸� ����, ������ (���� �Ѽչ��� -> ���ó��)
// ���ں��� const ���� �� ������ �����ϴ� ���� ���� ó���� ����.
void samplePrint2(const Sample& s1) {

	cout << s1.str << ", " << s1.str2 << endl;
	//strcpy_s(s1.str, sizeof(s1.str), "��������");
}

int main() {

	sample = { "abc", "�ѱ�" };

	samplePrint(sample);

	samplePrint2(sample);
	return 0;
}

