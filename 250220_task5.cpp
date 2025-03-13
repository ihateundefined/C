#include <stdio.h>

/*
* 1. 사용자로부터 정수 두 개 입력받기
* 2. 두 수를 비교 -> 최댓값 max, 최솟값 min 구하는 함수 두 개 정의하기
* 3. main에서 호출하여, 결과 출력
* 예) 두 정수를 입력하시오 : 5 3
* 최대값 : 5 최소값 : 3
*/

void min(int a, int b)
{
	int min = 0;

	if (a > b)
	{
		min = b;
	}
	else {
		min = a;
	}

	printf("최솟값은 >> %d\n", min);
}

void max(int a, int b)
{
	int max = 0;

	if (a > b)
	{
		max = a;
	}
	else {
		max = b;
	}

	printf("최댓값은 >> %d\n", max);
}

void main()
{
	int a = 0;
	int b = 0;
	
	printf("정수 두 개를 입력하세요 >>> ");
	scanf_s("%d %d", &a, &b);

	min(a, b);
	max(a, b);
}