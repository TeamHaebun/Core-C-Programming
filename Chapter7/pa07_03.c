/*
3. Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ밪�� �ּҰ��� ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�迭�� �ʱⰪ�� ������� ���Ͻÿ�.

������
�迭: 23 45 62 12 99 83 23 50 72 37
�ִ밪: 99
�ּҰ�: 12
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pa07_03() {
	int arr[10] = { 12, 34, 56, 78 ,99, 26, 31, 48, 1, 35 };
	int max, min;
	int i;

	max = arr[0];
	min = arr[0];
	printf("�迭: ");
	for (i = 0; i < 10; i++) {
		printf(" %d", arr[i]);
		if (max < arr[i])	max = arr[i];
		if (min > arr[i])	min = arr[i];
	}
	printf("\n�ִ밪: %d", max);
	printf("\n�ּҰ�: %d", min);
}