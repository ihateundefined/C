#include <stdio.h>

/*
* 1. 문자형 변수 a를 선언하여 초기값을 ‘A’로 설정
* 2. 문자형 포인터 변수 pA를 선언하여 앞서 선언한 문자형 변수 a의 주소값을 넘겨 받는다.
* 3. 포인터 변수 pA를 사용하여 A부터 Z까지 문자를 출력
*/

void main()
{
	char a = 'A';
	char* pA = &a;

	printf("A to Z 출력 시작\n");
	for (char i = *pA; i <= 'Z'; i++) {
		printf("%c\n", i);
	}
}