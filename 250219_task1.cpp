#include <stdio.h>

void main()
{
	/*
	* 1. �������� ���
	* 2. ¦����(2��, 4��, 6��, 8��)�� ���
	* 3. continue���� ���
	*/

	printf("�������� ¦���ܸ� ��� �����մϴ�.\n");
	
	for (int i=2; i<10; i++)
	{
		
		if (i % 2 == 1)
		{
			continue;
		}
		
		printf("%d�� ��� ����\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, (i * j));
		}
		printf("%d�� ��� �Ϸ�\n\n", i);
	}
}