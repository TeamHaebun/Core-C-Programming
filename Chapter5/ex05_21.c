// 센티널 값을 이용한 사칙연산 계산기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex05_21(void)
{
	int a, b;
	char op;

	while (1)
	{
		printf("수식? ");
		scanf("%d %c %d", &a, &op, &b);

		// 0 0 0이 되면 루프를 빠져나간다.
		if (a == 0 && op == '0' && b == 0)
			break;

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
				printf("0으로 나눌 수 없습니다.\n");
			break;
		default:
			printf("잘못된 수식입니다.\n");
			break;
		}
	}

	return 0;
}