#include <stdio.h>

/*
* 1. ���̰� 5�� ������ �迭�� ����
* 2. �ʱⰪ�� {3, 5, 2, 11, 10} �̶�� ����
* 3. 5���� �迭�� ��� �� ���� ū ���� ã�Ƽ� ����� ������
*/

void main()
{
	int arr[5] = { 3, 5, 2, 11, 10 };
	int largest = arr[0];

	for (int i = 1; i < 5; i++)
	{
		if (arr[i] > largest)
		{
			largest = arr[i];
		}
	}
	printf("�ִ밪�� >>> %d\n", largest);
}