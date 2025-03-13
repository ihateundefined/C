#include <stdio.h>

void main()
{
	int b = 100;
	int *pB = &b; // 형태는 15와 같지만 의미가 다름
	// *붙임으로써 주소값만 저장하는 것이라고 표현 .. *이 아니면 다른 형태로 대입할 수 있으니까 .. 구분지어줌
	
	printf("b = %d\n", b);
	// printf("&b = %d\n", &b);
	// 16진수
	printf("&b = %x\n", &b); // b의 주소값
	// printf("&b = %p\n", &b); // b의 주소값
		
	printf("pB = %x\n", pB); // b의 주소값
	printf("*pB = %d\n", *pB); // b의 값, 형태는 6과 같지만 의미가 다름
	// * pB가 가르키고 있는 값
}