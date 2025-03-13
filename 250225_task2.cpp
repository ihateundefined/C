#include <stdio.h>

/*
* 1. ����ڷκ��� ������ �ϳ� �Է� �޴´�.
* 2. Factorial �̶�� �̸��� �Լ��� �����
* 3. �Է� ���� ������ ���� ���ڷ� �����Ѵ�.
* 4. Factorial �̶�� �Լ��� ���п����� ���丮��� �Ȱ��� ����� �Ѵ� -> 3!�̸� 3*2*1�� �����
* 5. ������� ���� Factorial �Լ��� �� ��° �������ڿ� ������ ���·� �����Ѵ�
* 6. �Լ��� ���� �� ����ȣ�⿡ ���� ��� ���� �������ڷ� ���ϵǵ��� �Ѵ�.
*/

int Factorial(int a, int* factorial)
{
	for (int i = a; i > 0; i--)
	{
		*factorial *= i;
	}
	return *factorial;
}

void main()
{
	int num = 0;
	
	printf("���� �ϳ� �Է� �ޱ� >> ");
	scanf_s("%d", &num);

	int factorial = 1;

	Factorial(num, &factorial);
	
	printf("Factorial ��� %d\n", factorial);
}