#include <stdio.h>

void main()
{
	/*
	* 1. 구구단을 출력
	* 2. 짝수단(2단, 4단, 6단, 8단)만 출력
	* 3. continue문을 사용
	*/

	printf("구구단을 짝수단만 출력 시작합니다.\n");
	
	for (int i=2; i<10; i++)
	{
		
		if (i % 2 == 1)
		{
			continue;
		}
		
		printf("%d단 출력 시작\n", i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, (i * j));
		}
		printf("%d단 출력 완료\n\n", i);
	}
}