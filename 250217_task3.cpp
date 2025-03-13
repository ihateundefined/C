#include <stdio.h>

void main()
{
	/*
	* 사용자로부터 1개의 정수를 입력 받아서
	* 입력 받은 수에 5를 곱한 결과를 출력하라.
	*/

	int input = 0;

	scanf_s("%d", &input);
	printf("%d", input * 5);
}