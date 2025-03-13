#include <stdio.h>

void main()
{
	/*
	* 1. 정수 두개 입력받기
	* 2. 두 수를 비교하여 큰 수를 출력
	*/

	int a = 0;
	int b = 0;

	printf("첫 번째 정수를 입력해주세요 : ");
	scanf_s("%d", &a);
	printf("두 번째 정수를 입력해주세요 : ");
	scanf_s("%d", &b);

	if (a > b) {
		printf("첫 번째 입력한 정수 %d가 더 큰 수 입니다.\n", a);
	}
	else if (a < b) {
		printf("두 번째 입력한 정수 %d가 더 큰 수 입니다.\n", b);
	}
	else {
		printf("두 정수는 %d, %d로 같습니다.\n", a, b);
	}
}