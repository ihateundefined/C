#include <stdio.h>

/*
* 1. ����ڷκ��� �� ���� �Է��� �޾�
* 2. �� ���� �հ� ���� ���ϴ� ���α׷��� �ۼ��� ��
* 3. �� ���� �հ� ���� ����� �� ���� �Լ� �ȿ��� �Լ��� �հ� ���� ������ �̷�������Ѵ�
* 4. return ��� �Ʒ��� ���� ...?
* input���� output���ε� ��� ����
* out���� �������ڷ� ..?
* void func(int a, int b, int hap, int gop)
* {
* 
* }
* 5. call by reference ����� ��
* 
* �� )
* �� ���� �Է� >> 10 20
* �� : 30
* �� : 200
*/

void func(int a, int b, int* hap, int* gop)
{
	*hap = a + b;
	*gop = a * b;
}

void main()
{
	int a = 0;
	int b = 0;
	
	printf("�� ������ �Է� >> ");
	scanf_s("%d %d", &a, &b);

	int hap = 0;
	int gop = 0;

	func(a, b, &hap, &gop);
	
	printf("�� : %d\n", hap);
	printf("�� : %d\n", gop);
}