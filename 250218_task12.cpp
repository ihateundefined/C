#include <stdio.h>

void main()
{
	/*
	* 1. 반복문을 사용하여 1월부터 12월까지 출력
	* 2. while문, for문, do-while문 각각 세 개의 예제 작성
	* 출력 예) 1월 2월
	*/
	
	printf("while문\n");
	int month = 1;
	while (month < 13) {
		printf("%d월\n", month);
		month++;
	}

	printf("for문\n");
	for (int i = 1; i < 13; i++) {
		printf("%d월\n", i);
	}

	printf("do-while문\n");
	int month = 1;
	do {
		printf("%d월\n", month);
		month++;
	} while (month < 13);
}