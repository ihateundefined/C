/*
* 1. ���� ���� ȣ�� ��Ŀ� �ǰ��ؼ� �Լ��� ȣ���ϵ�, �� ���� ���� �ٲٴ� �Լ��� Swap() �Լ��� �ۼ�
* 2. main() �Լ����� Swap �Լ� ȣ�� �� ���� ���
* 3. �Լ� �ȿ��� ���� �� ���� ���
* 4. �Լ� �ۿ��� ���� ���
* ��) �ʱⰪ a = 1, b = 2
* �Լ� �� ���� x =2, y = 1
* �Լ� �� ��� a =1, b =2
*/

#include <stdio.h>

void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;

	printf("�Լ� �� ���� x = %d, y = %d\n", x, y);
}

void main()
{
	int a = 1;
	int b = 2;

	printf("�ʱⰪ a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("�Լ� �� ��� a = %d, b = %d\n", a, b);
}