/*
1. ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
ù ��° ��? [ 1 ]
����? [ 5 ]
��������: 1 6 11 16 21 26 31 36 41 46

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int equidistant(int term, int common_difference) {
	return term + common_difference;
}


int pa07_01(void) {
	int i, term, common_difference;
	int arr[10];

	printf("ù ��° ��? ");
	scanf("%d", &term);
	printf("����? ");
	scanf("%d", &common_difference);

	printf("��������:");
	arr[0] = term;
	printf(" %d", arr[0]);
	for (i = 1; i < 10; i++) {
		arr[i] = equidistant(arr[i-1], common_difference);
		printf(" %d", arr[i]);
	}
}