#include <stdio.h>

/*
* 1. ������ ���� 1���� �������ڷ� �޴� �Լ� �����.
* 2. ���޹��� ������ ������ 2�� ���Ͽ� ����
* 3. �� �Լ��� main���� ȣ���Ͽ� ���
* ��)
int �Լ��̸�(int a)
{
	return a * 2;
}
*/

int multiple(int a)
{
	return a * 2;
}

void main()
{
	int a = 0;
	
	printf("���� �Ѱ��� �Է����ּ��� >>> ");
	scanf_s("%d", &a);

	printf("�Է��� ���� �ι��߽��ϴ� >>> %d\n", multiple(a));
}