#include <stdio.h>

void main()
{
	/*
	* 1. 하나의 정수를 입력 받는다
	* 2. 입력한 값이 짝수 -> 입력한 수는 짝수
	* 3. 홀수 -> 입력한 수는 홀수
	* 4. switch – case 문을 이용
	*/

	int number = 0;

	printf("정수를 하나만 입력해주세요 >>> ");
	scanf_s("%d", &number);

	switch (number % 2)
	{
	case 0:
		printf("입력한 수는 짝수입니다.\n");
		break;
	case 1:
		printf("입력한 수는 홀수입니다.\n");
		break;
	default:
		printf("잘못된 입력입니다.\n");
		break;
	}
}