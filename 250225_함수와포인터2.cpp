#include <stdio.h>

/*
// call by value
// ���⿡�� ���� �ٲ���� main �Լ������� �ٲ��� ����
// �޸𸮰� �ٸ��ϱ�
void swab(int a, int b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;

	printf("swab �Լ����� ��� >>> \n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

void main()
{
	int x = 10;
	int y = 20;
	//int temp = 0;

	printf("1. ���� �� ���) x = %d, y = %d\n", x, y);

	//temp = x;
	//x = y;
	//y = temp;
	//printf("2. �ٲ��ֱ�) x = %d, y = %d\n", x, y);
	
	swab(x, y);
	printf("3. swab �Լ�) x = %d, y = %d\n", x, y);
}
*/

/*
// call by reference
void callRef(int* pX) // a�� �޸�	�ּҰ��� �޾ƿ�
{
	*pX += 3;
	printf("int a�� �� ��� >>> %d\n", *pX);
}

void main()
{
	int a = 1;
	//callRef(a); // call by value

	callRef(&a); // call by reference
	printf("main �Լ����� ��� >>> %d\n", a);
}
*/

/*
// call by reference ����
void swap(int* pX, int* pY) // * ������� �ּҰ��� ���޹޵��� ��
{
	int temp = 0;
	temp = *pX; // temp = x
	*pX = *pY; // x = y
	*pY = temp; // y = temp
}
void main()
{
	int x = 10;
	int y = 20;
	printf("1. ���� �� ���) x = %d, y = %d\n", x, y);

	swap(&x, &y); // �ּҰ����� �ѱ��
	// �Լ��� �������Ծ ���� �ٲ�� �ȴ�, �޸��� ���� �ٲ���� ������
	printf("2. swap �Լ�) x = %d, y = %d\n", x, y);
}
*/