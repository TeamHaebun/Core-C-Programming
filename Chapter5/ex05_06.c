// else if�� �̿��� �ؽ�Ʈ ����� �޴� ó��
#include <stdio.h>

int main(void)
{
	int menu;
	char filename[32] = "test.avi";

	printf("1.���� ����\n");
	printf("2.���\n");
	printf("3.��� �ɼ�\n");
	printf("����: ");

	scanf("%d", &menu);
	if (menu == 1) {
		printf("����� ���� �̸�? ");
		scanf("%s", filename);
	}
	else if (menu == 2) {
		printf("%s�� ����մϴ�.\n");
	}
	else if (menu == 3) {
		printf("��� �ɼ��� �����մϴ�.\n");
	}
	else {
		printf("�߸� �����ϼ̽��ϴ�.\n");
	}

	return 0;
}