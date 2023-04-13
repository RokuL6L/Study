#include "std.h"


void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();
void exam9();
void exam10();

void main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	//exam7();
	//exam8();
	exam9();
	//exam10();
	//exam11();
}

void exam1() {
	FILE* fp;
	if (fopen_s(&fp, "test.txt", "r") != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	fclose(fp);
}
void exam2() {
	FILE* fp;
	if (fopen_s(&fp, "test.txt", "w") != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	putc('A', fp);
	putc('A', stdout);

	for (int i = 'B'; i < 'F'; i++) {
		putc(i, fp);
	}

	putc('\n', fp);
	putc('G', fp);

	fclose(fp);
}

void exam3() {
	FILE* fp;
	if (fopen_s(&fp, "test.txt", "r") != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	char ch1 = getc(fp);
	char ch2 = getc(fp);

	printf("%c %c", ch1,ch2);

	fclose(fp);
}

void exam4() {
	FILE* r_fp;
	if (fopen_s(&r_fp, "main.c", "r") != 0) {
		printf("파일 열기 실패\n");
		return;
	}
	FILE* w_fp;
	if (fopen_s(&w_fp, "복사.txt", "w") != 0) {
		printf("파일 열기 실패\n");
		return;
	}
	
	while (1) {
		char ch = getc(r_fp);
		if (ch == EOF) {
			break;
		}

		putc(ch, stdout);
		putc(ch, w_fp);

		
	}
	

	fclose(r_fp);
	fclose(w_fp);
}

void exam5() {
	FILE* fp;
	if (fopen_s(&fp, "test.txt", "w") != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	fputs("Hello World!\n", stdout);
	fputs("Hello World!\n", fp);
	fputs("Hello World!\n", fp);
	fputs("Hello World!\n", fp);

	fclose(fp);
}

void exam6() {
	FILE* fp;
	if (fopen_s(&fp, "test.txt", "r") != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	char arr[20];
	fgets(arr, sizeof(arr), fp);
	printf("%s", arr);
	


	fclose(fp);
}
void exam7() {
	FILE* r_fp;
	if (fopen_s(&r_fp, "main.c", "r") != 0) {
		printf("파일 열기 실패\n");
		return;
	}
	FILE* w_fp;
	if (fopen_s(&w_fp, "복사.txt", "w") != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	char arr[512];
	while (1) {
		if (fgets(arr, sizeof(arr), r_fp) == NULL) {
			break;
		}

		fputs(arr, stdout);
		fputs(arr, w_fp);
	}


	fclose(r_fp);
	fclose(w_fp);
}

void exam8() {
	FILE* fp;
	if (fopen_s(&fp, "test.txt", "w") != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	printf("%s\t%d\t%c\t%f\n", "문자열", 12, 'A', 10.324);

	fprintf(stdout, "%s\t%d\t%c\t%f\n", "문자열", 12, 'A', 10.324);


	fprintf(fp,"%s\t%d\t%c\t%f\n", "문자열", 12, 'A', 10.324);

	fclose(fp);
}

void exam9() {
	FILE* fp;
	if (fopen_s(&fp, "test.txt", "r") != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	char arr[20];
	int num;
	char ch;
	double dnum;

	//fscanf_s(fp, "%s", arr, (int)sizeof(arr));
	//fscanf_s(fp, "%d", &num);
	//fscanf_s(fp, "%c", &ch, (int)sizeof(ch));
	//fscanf_s(fp, "%c", &ch, (int)sizeof(ch));
	//fscanf_s(fp, "%f", &dnum);

	fscanf_s(fp, "%s %d %c %c %f",
		arr, (int)sizeof(arr),
		&num,
		&ch, (int)sizeof(ch),
		&ch, (int)sizeof(ch),
		&dnum);

	fprintf(stdout, "%s\t%d\t%c\t%f\n", "문자열", 12, 'A', 10.324);



	fclose(fp);
}