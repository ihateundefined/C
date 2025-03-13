#include <stdio.h>

void main()
{
	/*
	* 1. 반복문을 사용하여 별표 10개를 출력하라
	* 2. while문, for문, do-while문 각각 세 개의 예제 작성
	* 출력 예) **********
	*/
	
	int a = 0;

	printf("while문\n");
	while (a < 10) {
		printf("*");
		a++;
	}

	printf("\nfor문\n");
	for (int i = 0; i < 10; i++) {
		printf("*");
	}

	int b = 0;

	printf("\ndo-while문\n");
	do {
		printf("*");
		b++;
	} while (b < 10);
}