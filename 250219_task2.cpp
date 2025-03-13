#include <stdio.h>

void main()
{
	/*
	* 1. 직각삼각형 모양으로 별 찍기
	* 2. while문 사용하기
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