#include <stdio.h>

/*
* 1. 앞에서 작성한 예제 기반 -> 사칙연산 (더하기, 빼기, 곱하기, 나누기) 가능한 계산기 작성
* 2. 사용자로부터 정수 두 개 입력받기
* 3. 각각 결과 출력
*/

int plus(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

int multiple(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}

void main()
{
	int a = 0;
	int b = 0;

	printf("정수 두개 입력 >>> ");
	scanf_s("%d %d", &a, &b);

	printf("두 정수의 합은 %d 입니다.\n", plus(a,b));
	printf("두 정수의 차는 %d 입니다.\n", minus(a,b));
	printf("두 정수의 곱은 %d 입니다.\n", multiple(a,b));
	printf("두 정수의 나누기는 %d 입니다.\n", divide(a,b));
}