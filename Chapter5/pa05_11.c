/*
11. 32��Ʈ ũ���� ������(��ȣ ���� ������)�� ���ؼ� 0~31��° ��Ʈ ���� �ϳ��� 1�� ���� ���ؼ� 16������ 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
 0�� ��Ʈ�� 1�� �� : 00000001 1
 1�� ��Ʈ�� 1�� �� : 00000002 2
 2�� ��Ʈ�� 1�� �� : 00000004 4
 3�� ��Ʈ�� 1�� �� : 00000008 8
 4�� ��Ʈ�� 1�� �� : 00000010 16
...

31�� ��Ʈ�� 1�� �� : 80000000 -2147483648
*/

#include <stdio.h>
int pa05_11(void)
{
    unsigned int x = 1;

    for (int i = 0; i < 32; i++)
    {
        printf("%2d��° ��Ʈ�� 1�� ��: %08x %d\n", i, x, x);
        x *= 2;
    }
}