// �����͸� �迭�� ��ó�� ����ϴ� ���
#include <stdio.h>

int ex08_09(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *p = arr;	// �迭�� �̸�, �迭�� ���� �ּ�, &arr[0]�� ��� ����.
	int i;

	for (i = 0; i < 5; i++)
		printf("p[%d] = %d\n", i, p[i]);		// p�� �迭 �̸��� ��ó�� ����Ѵ�.
	return 0;
}