// ������ �迭�� ���� �� ���
#include <stdio.h>

int ex08_11(void)
{
	int a, b, c, d, e;
	int *arr[5] = { &a, &b, &c, &d, &e };		// ������ �迭
	int i;

	for (i = 0; i < 5; i++)
	{
		*arr[i] = i;
		printf("%d ", *arr[i]);			// arr[i]�� �������̴�.
	}
	printf("\n");

	return 0;
}