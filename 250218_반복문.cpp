#include <stdio.h>

void main()
{
	/*
	// ���� ���� 5�� ����ϱ�
	printf("programming\n");
	printf("programming\n");
	printf("programming\n");
	printf("programming\n");
	printf("programming\n");
	*/

	/*
	// while�� ���
	int i = 0;

	while (i < 5)
	{
		printf("programming\n");
		i++;
		printf("%d\n", i);
	}
	*/

	/*
	// ������ 2��
	int i = 1;
	while (i < 10)
	{
		printf("2 * %d = %d\n", i, (2*i));
		i++;
	}
	printf("������ ��� ��!\n");
	*/

	/*
	// do~while��

	int i = 0;

	do {
		printf("Programming\n");
		i++;
		printf("%d\n", i);
	} while (i < 5);
	*/

	/*
	// do~while�� ����
	int sum = 0;
	int input = 0;

	do {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &input);
		sum = sum + input;
	} while (input != 0);
	printf("�� ���� %d �Դϴ�.\n", sum);
	*/

	/*
	// do~while���� while�� �ٲٱ�
	int input = 1;
	int sum = 0;

	while (input != 0)
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &input);
		sum = sum + input;
	}
	printf("�� ���� %d �Դϴ�.\n", sum);
	*/

	/*
	// for��
	for (int i = 0; i < 5; i++)
	{
		printf("Programming, %d\n", i);
	}
	*/

	/*
	// for������ ����� ������
	for (int i = 1; i < 10; i++) {
		printf("2 * %d = %d\n", i, (2 * i));
	} printf("2�� ��!\n");
	*/

	/*
	// ������� �ұ�?
	int num = 1;
	
	printf("������ �� ���� �ñ��Ѱ���? �Է��ϼ��� >>> ");
	scanf_s("%d", &num);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", num, i, (num * i));
	} printf("%d�� ��!\n", num);
	*/
}