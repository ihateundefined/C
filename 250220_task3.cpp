#include <stdio.h>

/*
* 1. ���� ���� ���ϴ� �Լ� �ۼ�.
* 2. �� ���̴� ������ * ������ * 3.14
* 3. ����ڷκ��� ���� �Է� �ޱ� -> ������
* 4. ���� ���� ����ϴ� �Լ� -> �̸� circle
* 5. main���� ȣ������
*/

void circle(int radian)
{
	printf("���� ���� >>> %.2f\n", radian * radian * 3.14);
}

void main()
{
	int radian = 0;

	printf("���� ���������� ������ �ϳ��� �Է��ϼ��� >>> ");
	scanf_s("%d", &radian);

	circle(radian);
}