#include <stdio.h>

void main()
{
	/*
	* 1. ����ڷκ��� 2���� ������ �Է� �޾Ƽ�
	* 2. ��Ģ ������ ����� ���
	* ��) ����� �Է��� ���� 4�� 2�� �Է��Ͽ��� ��, ��� ����� ���´� ������ ����.
	* �� ���� �� : 6
	* �� ���� �� : 2
	* �� ���� �� : 8
	* �� ���� ������ : 2
	*/

	int input1 = 0;
	int input2 = 0;

	printf("���� �� ���� ����� �����Ͽ� �� ���� �Է��ϼ���!\n");
	scanf_s("%d %d", &input1, &input2);

	int sum = input1 + input2;
	int minus = input1 - input2;
	int multiply = input1 * input2;
	double divide = (double) input1 / (double) input2;

	printf("�� ���� ���� : %d, %d\n", input1, input2);
	printf("�� ���� �� : %d\n", sum);
	printf("�� ���� �� : %d\n", minus);
	printf("�� ���� �� : %d\n", multiply);
	printf("�� ���� ������ : %.2f\n", divide);
}