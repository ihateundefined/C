#include <stdio.h>

void main()
{
	/*
	* 1. ����ڷκ��� 3���� ������ �Է� �޾Ƽ�
	* 2. 3���� ���� ���� ����� ���
	* ��) �� ���� ������ �Է��ϼ��� : 2 3 4
	* �� ���� ���� 24�Դϴ�.
	*/

	int input1 = 0;
	int input2 = 0;
	int input3 = 0;

	printf("���� �� ���� ����� �����Ͽ� �� ���� �Է��ϼ���!\n");
	scanf_s("%d %d %d", &input1, &input2, &input3);

	printf("�� ���� ���� : %d %d %d\n", input1, input2, input3);
	printf("�� ���� �� : %d\n", input1 * input2 * input3);
}