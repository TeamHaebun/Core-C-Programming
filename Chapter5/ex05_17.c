// do while�� �̿��� ��Ģ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ex05_17(void)
{
	int a, b;
	char op;
	char yesno;

	do {
		printf("����? ");
		scanf("%d %c %d", &a, &op, &b);

		switch (op) {
		case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d\n", a, b, a * b);
			break;
		case '/':
			if (b != 0)
				printf("%d / %d = %.2f\n", a, b, (double)a / b);
			else
				printf("0���� ���� �� �����ϴ�.\n");
			break;

		default:
			printf("�߸��� �����Դϴ�.\n");
			break;
		} 
		printf("��� �Ͻðڽ��ϱ�(Y/N)? ");
		scanf(" %c", &yesno);

	} while (yesno == 'Y' || yesno == 'y');

	return 0;
}