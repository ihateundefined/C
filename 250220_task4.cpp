#include <stdio.h>

/*
* 1. �տ��� �ۼ��� ���� ��� -> ��Ģ���� (���ϱ�, ����, ���ϱ�, ������) ������ ���� �ۼ�
* 2. ����ڷκ��� ���� �� �� �Է¹ޱ�
* 3. ���� ��� ���
*/

int plus(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

int multiple(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}

void main()
{
	int a = 0;
	int b = 0;

	printf("���� �ΰ� �Է� >>> ");
	scanf_s("%d %d", &a, &b);

	printf("�� ������ ���� %d �Դϴ�.\n", plus(a,b));
	printf("�� ������ ���� %d �Դϴ�.\n", minus(a,b));
	printf("�� ������ ���� %d �Դϴ�.\n", multiple(a,b));
	printf("�� ������ ������� %d �Դϴ�.\n", divide(a,b));
}