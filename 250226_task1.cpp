#include <stdio.h>

/*
* 1. void �� ������ ������ double���� ���� ���� ����
* 2. double �� ������ void�� ������ ������ ����Ű�� �Ѵ�
* 3. �׸��� void�� ������ ������ ���ؼ� ����Ű�� �ִ� ������ ȭ�鿡 ���
* ��) void *a;
*	  double b = 3.14;
*/

void main()
{
	void* a;
	double b = 3.14;

	a = &b;

	printf("%.2f\n", *(double*)a);
}