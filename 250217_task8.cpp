#include <stdio.h>

void main()
{
	/*
	* 1. 사용자로부터 2개의 정수를 입력 받아서
	* 2. 사칙 연산의 결과를 출력
	* 예) 사용자 입력을 각각 4와 2를 입력하였을 때, 출력 결과의 형태는 다음과 같다.
	* 두 수의 합 : 6
	* 두 수의 차 : 2
	* 두 수의 곱 : 8
	* 두 수의 나누기 : 2
	*/

	int input1 = 0;
	int input2 = 0;

	printf("정수 두 개를 띄어쓰기로 구분하여 한 번에 입력하세요!\n");
	scanf_s("%d %d", &input1, &input2);

	int sum = input1 + input2;
	int minus = input1 - input2;
	int multiply = input1 * input2;
	double divide = (double) input1 / (double) input2;

	printf("두 개의 정수 : %d, %d\n", input1, input2);
	printf("두 수의 합 : %d\n", sum);
	printf("두 수의 차 : %d\n", minus);
	printf("두 수의 곱 : %d\n", multiply);
	printf("두 수의 나누기 : %.2f\n", divide);
}