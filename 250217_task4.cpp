#include <stdio.h>

void main()
{
	/*
	* 사용자로부터 두 개의 정수를 입력 받는다.
	* 입력한 두 정수를 그대로 출력하는 프로그램을 작성하라.
	*/

	int input1 = 0;
	int input2 = 0;

	printf("정수 두 개를 하나씩 입력하세요. 엔터로 구분하기!\n");
	scanf_s("%d", &input1);
	scanf_s("%d", &input2);
	printf("첫 번재 정수 : %d\n두 번째 정수 : %d\n", input1, input2);
}