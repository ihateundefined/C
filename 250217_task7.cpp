#include <stdio.h>

void main()
{
	/*
	* 1. ����ڷκ��� 3���� ������ �Է� �޾Ƽ�
	* 2. �� ������ �հ� ����� ���
	*/

	int input1 = 0;
	int input2 = 0;
	int input3 = 0;

	printf("���� �� ���� ����� �����Ͽ� �� ���� �Է��ϼ���!\n");
	scanf_s("%d %d %d", &input1, &input2, &input3);

	int sum = input1 + input2 + input3;
	double average = (double) (input1 + input2 + input3) / 3;

	printf("�� ���� ���� : %d %d %d\n", input1, input2, input3);
	printf("�� ���� �� : %d\n", sum);
	printf("�� ���� ��� : %.2f\n", average);
}