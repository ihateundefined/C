#include <stdio.h>

/*
* 1. char 형 변수 a, int 형 변수 b, double 형 변수 c
* 2. 선언과 동시에 각각 C 10 3.14로 초기화
* 3. 각각의 포인터 변수를 선언하되 char형 변수 pA는 a, int형 변수 pB는 변수 b를, double형 변수 pC는 변수 c를 가리키게 한다
* 4. 이 때 각각의 포인터 변수 pA, pB, pC를 이용하여, 변수 a, b, c의 값을 1증가 시킨다
* 5. a, b, c의 값을 출력해보자.
* 예 )
	char a = ‘C’;
	int b = 10;
	double c = 3.14;

	char* pA = &a;
	int *pB = &b;
	double *pC = &c;
*/

void main()
{
	char a = 'C';
	int b = 10;
	double c = 3.14;

	char* pA = &a;
	int* pB = &b;
	double* pC = &c;

	printf("pA의 실제값 출력 >> %c\n", *pA+1);
	printf("pB의 실제값 출력 >> %d\n", *pB+1);
	printf("pC의 실제값 출력 >> %.2f\n", *pC+1);
}