#include <stdio.h>

void main()
{
	/*
	* 1. ���� �ΰ� �Է¹ޱ�
	* 2. �� ���� ���Ͽ� ū ���� ���
	*/

	int a = 0;
	int b = 0;

	printf("ù ��° ������ �Է����ּ��� : ");
	scanf_s("%d", &a);
	printf("�� ��° ������ �Է����ּ��� : ");
	scanf_s("%d", &b);

	if (a > b) {
		printf("ù ��° �Է��� ���� %d�� �� ū �� �Դϴ�.\n", a);
	}
	else if (a < b) {
		printf("�� ��° �Է��� ���� %d�� �� ū �� �Դϴ�.\n", b);
	}
	else {
		printf("�� ������ %d, %d�� �����ϴ�.\n", a, b);
	}
}