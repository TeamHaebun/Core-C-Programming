// �迭�� ��
#include <stdio.h>

int ex07_08(void)
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[5] = { 10, 20, 30, 40, 50 };
	int i;
	int is_equal;

	if (x == y)	 			 // x�� y�� �ּҰ� ������ ���Ѵ�.
		printf("�� �迭�� �ּҰ� �����ϴ�.");

	is_equal = 1;			 // �迭�� ������ �������� ��Ÿ���� ����
	for (i = 0; i < 5; i++) {
		if (x[i] != y[i]) {	 // �迭�� ���ҳ��� ���Ѵ�.
			is_equal = 0;
			break;
		}
	}
	if (is_equal == 1)		 // ��� ���Ұ� ������ is_equal�� 1�̴�.
		printf("�� �迭�� ������ �����ϴ�.\n");

	return 0;
}