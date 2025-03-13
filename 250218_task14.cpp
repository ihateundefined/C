#include <stdio.h>

void main()
{
	/*
	* 1. 2의 배수를 화면에 출력
	* 2. 단, 최대 범위는 100까지이다.
	*/
	
	for (int i = 1; i < 51; i++) {
		printf("%d\n", (i * 2));
	}
}