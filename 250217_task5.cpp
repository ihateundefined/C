#include <stdio.h>

void main()
{
	/*
	* 1. ����ڷκ��� �� ���� ������ �Է� �޾Ƽ�
	* 2. ���ʷ� ���ϱ�, ���ϱ� ������ ������� ����
	* 3. �� ����� ���
	* ��) 2 �� 3 �� 4 = 1��
	*/

	int input1 = 0;
	int input2 = 0;
	int input3 = 0;

	printf("���� �� ���� �Է��մϴ�.\n");
	printf("ù ��° ������ �Է��ϰ� ���� ���ּ���!\n");
	scanf_s("%d", &input1);
	printf("�� ��° ������ �Է��ϰ� ���� ���ּ���!\n");
	scanf_s("%d", &input2);
	printf("�� ��° ������ �Է��ϰ� ���� ���ּ���!\n");
	scanf_s("%d", &input3);

	printf("���ϱ�, ���ϱ� ���� ��� : %d + %d * %d = %d\n", input1, input2, input3, input1 + input2 * input3);
}