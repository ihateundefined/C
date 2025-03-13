#include <stdio.h>

void main()
{
	/*
	* 1. 알파벳 문자 하나를 입력 받는다
	* 2. 이에 해당하는 숫자를 출력하라
	* 예) ‘A’를 입력하면 출력 결과는 65가 되어야 한다. (참고, 문자 입력 시 서식은 %c를 사용하면 된다.)	
	*/

	char alphabet;

	printf("알파벳 문자 하나를 입력하세요!\n");
	scanf_s("%c", &alphabet);

	printf("입력한 알파벳 : %c\n", alphabet);
	printf("대응하는 숫자 : %d\n", alphabet);
}