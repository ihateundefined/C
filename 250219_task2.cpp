#include <stdio.h>

void main()
{
	/*
	* 1. �����ﰢ�� ������� �� ���
	* 2. while�� ����ϱ�
	* 
	* *
	* **
	* ***
	* ****
	* *****
	*/

	int row = 1;

	while (row < 6)
	{
		int column = 1;
		while (column <= row)
		{
			printf("*");
			column++;
		}
		printf("\n");
		row++;
	}
}