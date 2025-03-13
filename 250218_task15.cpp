#include <stdio.h>

void main()
{
	/*
	* 1. 반복문을 사용하여 1부터 10까지의 합을 출력
	* 2. while문, for문, do-while문 각각 세 개의 예제 작성
	*/
	
	printf("1. while문 결과 >>> ");
	int sum1 = 0;
	int number1 = 1;
	while (number1 < 11) {
		sum1 += number1;
		number1++;
	}
	printf("%d\n", sum1);

	printf("2. for문 결과 >>> ");
	int sum2 = 0;
	for (int i = 1; i < 11; i++) {
		sum2 += i;
	}
	printf("%d\n", sum2);

	printf("3. do-while문 결과 >>> ");
	int sum3 = 0;
	int number3 = 1;
	do {
		sum3 += number3;
		number3++;
	} while (number3 < 11);
	printf("%d\n", sum3);
}