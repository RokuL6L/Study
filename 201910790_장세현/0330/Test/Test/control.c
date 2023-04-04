#include "std.h"

#define ARR_COL 5
#define ARR_ROW 10

int arr[ARR_COL][ARR_ROW];

void con_init() {
	for (int i = 0; i < ARR_COL; i++) {
		for (int j = 0; j < ARR_ROW; j++) {
			arr[i][j] = -1;
		}
	}

	arr[2][4] = 24;
	arr[0][8] = 8;
	arr[1][5] = 33;
}

void con_insert() {
	int col, row, value;
	printf("행 ( 0 ~ %d ) :\n",ARR_COL-1);
	scanf_s("%d", &col);
	printf("열 ( 0 ~ %d ) :\n", ARR_ROW-1);
	scanf_s("%d", &row);
	printf("저장할 값 :\n");
	scanf_s("%d", &value);
	
	arr[col][row] = value;
	printf("저장되었습니다\n");
}

void con_select() {
	int col, row, value;

	printf(" 검색할 값 :\n");
	scanf_s("%d", &value);

	for (int i = 0; i < ARR_COL; i++) {
		for (int j = 0; j < ARR_ROW; j++) {
			if (arr[i][j] == value) {
				col = i;
				row = j;
				printf("%d 행 %d 열에 검색한 값 %d 가 잇습니다\n", col, row, value);
				return;
			}
		}
	}
	printf("없다\n");
}
//수정할 대상의 숫자 입력
//변경할 숫자(2) 입력
//(1)번의 숫자를 (2)번의 숫자로 변경하겠다
void con_update() {
	int col, row, value1, value2;

	printf(" 수정할 대상의 값 :\n");
	scanf_s("%d", &value1);

	printf(" 변경할 값 :\n");
	scanf_s("%d", &value2);

	for (int i = 0; i < ARR_COL; i++) {
		for (int j = 0; j < ARR_ROW; j++) {
			if (arr[i][j] == value1) {
				col = i;
				row = j;

				arr[col][row] = value2;
			}
		}
	}
	printf("수정 완료\n");
}

void con_delete() {
	int col, row, value1, value2;
	printf("delete\n");

	printf(" 삭제할 값 :\n");
	scanf_s("%d", &value1);

	for (int i = 0; i < ARR_COL; i++) {
		for (int j = 0; j < ARR_ROW; j++) {
			if (arr[i][j] == value1) {
				col = i;
				row = j;

				arr[col][row] = -1;
			}
		}
	}
	printf("삭제 완료\n");
}

void con_printall() {
	for (int i = 0; i < ARR_COL; i++) {
		for (int j = 0; j < ARR_ROW; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}