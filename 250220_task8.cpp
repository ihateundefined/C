#include <stdio.h>

/*
* 1. ���̰� 3�� �迭 arr1�� arr2�� ����
* 2. arr1�迭�� ����� ���ÿ� {1,2,3}���� �ʱ�ȭ
* 3. arr1�� arr2�� ����
* 4. arr2 �迭�� ��Ҹ� ��� ���
*/

void main()
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[3];

	for (int i = 0; i < 3; i++)
	{
		arr2[i] = arr1[i];
		printf("arr2[%d] �� >> %d\n", i, arr2[i]);
	}
}