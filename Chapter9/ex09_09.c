// ���� 9-9 : ���ڿ� �����Ͱ� ���� �迭�� ����Ű�� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> // ���� ó�� ���̺귯��

int ex09_09(void)
{
	char str[64] = "";
	char* p = str; // p�� str �迭�� ����Ų��.

	strcpy(p, "test string"); // p�� ����Ű�� ���� �迭�� �����Ѵ�.

	if (islower(p[0]))		// �ܾ��� ù ���ڸ� �빮�ڷ� �ٲ۴�.
		p[0] = toupper(p[0]);

	p = strchr(p, ' ');		// str�� ' ' ������ �ּҸ� ������ p�� �����Ѵ�.
	// ' ' ���� ���ڸ� �빮�ڷ� �ٲ۴�.
	if (islower(p[1]))
		p[1] = toupper(p[1]);
	puts(str);
	return 0;
}