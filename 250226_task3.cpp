/*
* 1. ���̰� 2�� ������ �迭�� ����
* 2. ����ڷκ��� �� ���� ���� �Է� �޾� �迭�� �� ��ҿ� ����
* 3. �� ���� ���Ͽ� ū ���� ���
* 4. ��, �� ���� ���Ͽ� ū ���� ����ϴ� ����� �Լ��� ó��
* ��)
* void Max(int a, int b)
* {
* }
*/

#include <stdio.h>

void Max(int a, int b)
{
	if (a > b)
	{
		printf("ū ���� >> %d\n", a);
	}
	else if (a < b) {
		printf("ū ���� >> %d\n", b);
	}
	else {
		printf("�� ���� �����ϴ� >> %d\n", a);
	}
}

void main()
{
	int arr[2];

	printf("���� �� �� �Է� >>> ");
	scanf_s("%d %d", &arr[0], &arr[1]);

	Max(arr[0], arr[1]);
}