#include <stdio.h>

/*
* 
* 1. �տ��� �ۼ��� ������ ����
* 2. �迭 arr1�� ���� �迭 arr2�� �����ϵ�, �迭 ��Ҹ� �������� ����
* 3. arr2 �迭�� ��Ҹ� ��� ���
*/

void main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5];
	
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = arr1[4 - i];
	}

	for (int i = 0; i < 5; i++)
	{
		printf("arr2[%d] �� >> %d\n", i, arr2[i]);
	}
}