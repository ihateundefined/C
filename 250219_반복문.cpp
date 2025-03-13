#include <stdio.h>

void main()
{
	/*
	// break문
	int a = 0;
	
	while (true)
	{
		if ( a > 100 )
		{
			break; // break를 만나면 while문 밖으로 나간다 -> 맨 마지막 printf로 이동
		}
		printf("a의 값은 %d입니다.\n", a);
		a++;
	}
	printf("a는 100보다 크다.\n");
	*/

	/*
	// continue문
	int a = 0;

	while (a < 100)
	{
		a++;
		if (a > 80 && a < 90) {
			continue;
		}
		printf("a의 값은 %d입니다.\n", a);
	}
	printf("여기는 while문 밖입니다.\n");
	*/

	/*
	// 이중 반복문
	// 구구단 2단 출력하기
	printf("구구단 2단 출력 시작!\n");
	for (int i = 1; i < 10; i++) {
		printf("2 * %d = %d\n", i, (2 * i));
	}
	printf("2단 출력 완성!\n");

	// 이중 반복문을 사용해서 구구단 출력하기
	for (int i = 2; i < 10; i++) {
		printf("구구단 %d단 출력 시작!\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, (i * j));
		}
		printf("구구단 %d단 출력 끝!\n", i);

	}
	printf("구구단 전체 출력 끝!\n");
	*/
}