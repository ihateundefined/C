#include <stdio.h>

/*
* 1. �簢���� ���̸� ���ϴ� �Լ� �ۼ�. -> main���� ȣ���Ͽ� ���
* 2. �簢�� ���̴� ���� ���� * ���� ����
* 3. ����ڷκ��� ���� �ΰ� �Է¹ޱ�
* ��) void �Լ��̸�(int width, int height)
* { }
*/

void area(int width, int height)
{
	printf("�簢���� ���̴� ������ �����ϴ� >>> %d\n", width * height);
}

void main()
{
	int width = 0;
	int height = 0;

	printf("�簢���� ���̸� ���غ��Կ�.\n");
	printf("���� ���̸� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &width);
	
	printf("���� ���̸� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &height);

	area(width, height);
}