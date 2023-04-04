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
	printf("�� ( 0 ~ %d ) :\n",ARR_COL-1);
	scanf_s("%d", &col);
	printf("�� ( 0 ~ %d ) :\n", ARR_ROW-1);
	scanf_s("%d", &row);
	printf("������ �� :\n");
	scanf_s("%d", &value);
	
	arr[col][row] = value;
	printf("����Ǿ����ϴ�\n");
}

void con_select() {
	int col, row, value;

	printf(" �˻��� �� :\n");
	scanf_s("%d", &value);

	for (int i = 0; i < ARR_COL; i++) {
		for (int j = 0; j < ARR_ROW; j++) {
			if (arr[i][j] == value) {
				col = i;
				row = j;
				printf("%d �� %d ���� �˻��� �� %d �� �ս��ϴ�\n", col, row, value);
				return;
			}
		}
	}
	printf("����\n");
}
//������ ����� ���� �Է�
//������ ����(2) �Է�
//(1)���� ���ڸ� (2)���� ���ڷ� �����ϰڴ�
void con_update() {
	int col, row, value1, value2;

	printf(" ������ ����� �� :\n");
	scanf_s("%d", &value1);

	printf(" ������ �� :\n");
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
	printf("���� �Ϸ�\n");
}

void con_delete() {
	int col, row, value1, value2;
	printf("delete\n");

	printf(" ������ �� :\n");
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
	printf("���� �Ϸ�\n");
}

void con_printall() {
	for (int i = 0; i < ARR_COL; i++) {
		for (int j = 0; j < ARR_ROW; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}