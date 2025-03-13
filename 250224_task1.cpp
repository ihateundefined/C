#include <stdio.h>

/* 1. 문자형 변수 a와 정수형 변수 b를 선언
* 2. 문자형 포인터 변수 pA와 정수형 포인터 변수 pB를 선언 -> 각각 a와 b의 주소값을 넘겨 받는다.
* 3. pA와 pB 포인터 변수를 이용하여 가리키고 있는 변수의 실제값을 출력해보자. 
* 예 )
	char a = ‘F’;
	int b = 5;
	char *pA = &a;
	int *pB = &b;
*/

void main()
{
	char a = 'A';
	int b = 0;

	char* pA = &a;
	int* pB = &b;

	printf("pA의 실제값 출력 >> %c\n", *pA);
	printf("pB의 실제값 출력 >> %d\n", *pB);
}