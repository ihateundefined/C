#include <stdio.h>

void main()
{
	/*
	* 1. 사용자로부터 3개의 정수를 입력 받아서
	* 2. 세 정수의 합과 평균을 출력
	*/

	int input1 = 0;
	int input2 = 0;
	int input3 = 0;

	printf("정수 세 개를 띄어쓰기로 구분하여 한 번에 입력하세요!\n");
	scanf_s("%d %d %d", &input1, &input2, &input3);

	int sum = input1 + input2 + input3;
	double average = (double) (input1 + input2 + input3) / 3;

	printf("세 개의 정수 : %d %d %d\n", input1, input2, input3);
	printf("세 수의 합 : %d\n", sum);
	printf("세 수의 평균 : %.2f\n", average);
}