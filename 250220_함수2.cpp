#include <stdio.h>

/*
// �Լ� ȣ�� ����
int Add(int a, int b) // ��������, �Ű�����, �Ķ����, �μ�
{
	return a + b;
}

void printStart()
{
	printf("==== programming start! ====\n");
	printf("�� ���� ���� �Է��ϱ� >>> ");
}

void printSum(int result)
{
	printf("�� ���� ���� %d �Դϴ�.\n", result);
	printf("==== programming end! ====\n");
}

void main()
{
	int x = 10;
	int y = 20;

	printStart();

	int sum = Add(x, y);
	// printf("%d\n", sum);
	printSum(sum);
}
*/

/*
// �޸��� �Ҵ�� �Ҹ�
void func2()
{
	int local = 20;
	printf("local = 20 �޸� �Ҵ�\n");
	printf("local = 20 �޸� �Ҹ�\n");
}

void func1()
{
	int local = 10;
	printf("local = 10 �޸� �Ҵ�\n");
	func2();
	printf("local = 10 �޸� �Ҹ�\n");
}

void main()
{
	int val = 0;
	printf("val = 0 �޸� �Ҵ�\n");
	func1();
	printf("val = 0 �޸� �Ҹ�\n");
}
*/

/*
// �����Լ�
void printStart()
{
	printf("==== programming start! ====\n");
	printf("�� ���� ���� �Է��ϱ� >>> ");
}

void printSum(int result)
{
	printf("�� ���� ���� %d �Դϴ�.\n", result);
	printf("==== programming end! ====\n");
}

int global;

void Add(int a, int b)
{
	global = a + b;
}

void main()
{
	int x = 10;
	int y = 20;

	printStart();
	Add(x, y);
	printSum(global);
}
*/

/*
// static ����
void func()
{
	static int value = 0;
	value++;
	printf("%d\n", value);
}

void main()
{
	for (int i = 0; i < 5; i++)
	{
		func();
	}
}
*/