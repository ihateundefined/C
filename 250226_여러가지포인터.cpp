#include <stdio.h>

/*
// �������� ������
void main()
{
	void* a;
	int b = 1234;

	a = &b;

	//printf("%d\n", *a);
	printf("%d\n", *(int*)a); // ����� ����ȯ type casting
}
*/

/*
// �Լ� ������
int Plus(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

void main()
{
	// ���������� �Լ� ȣ�� ����
	int (*fPtr)(int x, int y); // �Լ� ������ ����

	fPtr = Plus; // fPtr�� �� Plus �Լ���
	int result = fPtr(10, 20);
	printf("%d\n", result);

	fPtr = Minus; // fPtr�� �� Minus �Լ���
	result = fPtr(10, 20);
	printf("%d\n", result);
}
*/