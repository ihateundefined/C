#include <stdio.h>

/*
* 1. ����ڷκ��� ���� �� �� �Է¹ޱ�
* 2. �� ���� �� -> �ִ� max, �ּڰ� min ���ϴ� �Լ� �� �� �����ϱ�
* 3. main���� ȣ���Ͽ�, ��� ���
* ��) �� ������ �Է��Ͻÿ� : 5 3
* �ִ밪 : 5 �ּҰ� : 3
*/

void min(int a, int b)
{
	int min = 0;

	if (a > b)
	{
		min = b;
	}
	else {
		min = a;
	}

	printf("�ּڰ��� >> %d\n", min);
}

void max(int a, int b)
{
	int max = 0;

	if (a > b)
	{
		max = a;
	}
	else {
		max = b;
	}

	printf("�ִ��� >> %d\n", max);
}

void main()
{
	int a = 0;
	int b = 0;
	
	printf("���� �� ���� �Է��ϼ��� >>> ");
	scanf_s("%d %d", &a, &b);

	min(a, b);
	max(a, b);
}