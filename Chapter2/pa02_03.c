/*
3. ��¥�� ��, ��, �Ϸ� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, ��, ���� ������ �Է¹޴´�.

������
��? [2018]
��? [10]
��? [1]
�Է��� ��¥�� 2018�� 10�� 1���Դϴ�.

��
��, ��, �Ͽ� -500 15 55�� ���� �Է��ϸ� "-500�� 15�� 11��"�̶�� ����Ѵ�.
�츮�� �ۼ��� ���α׷��� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� ��, �Է¹��� �������� �ùٸ� ��¥���� Ȯ���ؼ� ����Ѵ� ���α׷��� �ƴϱ� �����̴�.
���� �Է¹��� ���� ���� �ùٸ� ��¥���� �˻��Ϸ��� �߰� �ڵ尡 �ʿ��ϴ�. �� �κ��� ���߿� �˾ƺ����� ����.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_03(void)
{
	int year, month, day;

	printf("��? ");
	scanf("%d", &year);
	printf("��? ");
	scanf("%d", &month);
	printf("��? ");
	scanf("%d", &day);

	printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.", year, month, day);
}