/*
* 1. ���̰� 2�� ������ �迭�� ����
* 2. ����ڷκ��� �� ���� ���� �Է� �޾� �迭�� �� ��ҿ� ����
* 3. �� ���� ���Ͽ� ū ���� ���
*/

#include <stdio.h>

void main()
{
	int arr[2];

	printf("���� �� �� �Է� >>> ");
	scanf_s("%d %d", &arr[0], &arr[1]);

	if (arr[0] > arr[1])
	{
		printf("ū ���� >> %d\n", arr[0]);
	}
	else if (arr[0] < arr[1]) {
		printf("ū ���� >> %d\n", arr[1]);
	}
	else {
		printf("�� ���� �����ϴ� >> %d\n", arr[0]);
	}
}