#include <stdio.h>

void main()
{
	/*
	* 1. 사용자로부터 세 개의 정수를 입력 받아서
	* 2. 차례로 곱하기, 더하기 연산을 순서대로 수행
	* 3. 그 결과를 출력
	* 예) 2 ＋ 3 ＊ 4 = 1４
	*/

	int input1 = 0;
	int input2 = 0;
	int input3 = 0;

	printf("정수 세 개를 입력합니다.\n");
	printf("첫 번째 정수를 입력하고 엔터 쳐주세요!\n");
	scanf_s("%d", &input1);
	printf("두 번째 정수를 입력하고 엔터 쳐주세요!\n");
	scanf_s("%d", &input2);
	printf("세 번째 정수를 입력하고 엔터 쳐주세요!\n");
	scanf_s("%d", &input3);

	printf("곱하기, 더하기 연산 결과 : %d + %d * %d = %d\n", input1, input2, input3, input1 + input2 * input3);
}