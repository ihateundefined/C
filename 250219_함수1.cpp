#include <stdio.h>

int Add(int a, int b) // ��������, �Ű�����, �Ķ����, �μ�, �μ����
{
	return a + b; // ���� ��ȯ�ϸ鼭, �Լ��� ������
}

/*
double Add(double c, double d)
{
	return c + d;
}
*/

void main()
{
	/*
	printf("�Ǽ� �� ���� �Է��ϼ��� >>> ");
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);

	int sum = Add(a, b);
	printf("�Է��� �� ���� ���� >>> %d\n", sum);
	*/

	/*
	double c = 2.3;
	double d = 3.3;
	scanf_s("%lf %lf", &c, &d);

	double sum2 = Add(c, d);
	printf("�Է��� �� ���� ���� >>> %f\n", sum2);
	*/

	int x = 10;
	int y = 20;

	// call by value .. ����
	// x -> int a�� �Ѿ�°� ������ ���ϸ� ������
	// ���� �����ϴ� ���� �ƴ϶� ���߿��� �ּҰ��� �����ϰ� �ȴ�
	// �ּҰ��� �ѱ�� �Ǹ�? �ش� �޸𸮸� ����Ű�� �ȴ� call by reference

	int sum3 = Add(x, y);
	printf("%d\n", sum3);
}