#include <stdio.h>

/*
* 1. char �� ���� a, int �� ���� b, double �� ���� c
* 2. ����� ���ÿ� ���� C 10 3.14�� �ʱ�ȭ
* 3. ������ ������ ������ �����ϵ� char�� ���� pA�� a, int�� ���� pB�� ���� b��, double�� ���� pC�� ���� c�� ����Ű�� �Ѵ�
* 4. �� �� ������ ������ ���� pA, pB, pC�� �̿��Ͽ�, ���� a, b, c�� ���� 1���� ��Ų��
* 5. a, b, c�� ���� ����غ���.
* �� )
	char a = ��C��;
	int b = 10;
	double c = 3.14;

	char* pA = &a;
	int *pB = &b;
	double *pC = &c;
*/

void main()
{
	char a = 'C';
	int b = 10;
	double c = 3.14;

	char* pA = &a;
	int* pB = &b;
	double* pC = &c;

	printf("pA�� ������ ��� >> %c\n", *pA+1);
	printf("pB�� ������ ��� >> %d\n", *pB+1);
	printf("pC�� ������ ��� >> %.2f\n", *pC+1);
}