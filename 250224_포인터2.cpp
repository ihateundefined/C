#include <stdio.h>

void main()
{
	/*
	// 포인터의 기본 연산
	char str[] = "Programming";
	char* pStr;

	pStr = &str[0];
	// P의 주소값을 pStr에 넘겨줌

	char* pStr1;
	pStr1 = &str[1];

	printf("%x\n", pStr); // P의 주소값 출력
	printf("%c\n", *pStr); // P 출력
	printf("%x\n", pStr1); // P의 주소값 출력
	printf("%x\n", pStr + 1); // str[1]의 주소값
	printf("%c\n", *(pStr + 1)); // r이 출력됨
	printf("%x\n", pStr + 3); // str[3]의 주소값
	printf("%c\n", *(pStr + 3)); // g이 출력됨

	// 문자 하나는 1바이트
	// pStr + 1 그 다음 요소 => 정수는 4바이트, char이니까 1바이트 씩 이동
	*/

	// 주소값의 실체는 ? 정수 -> 정수는 4바이트
	char a = 'A';
	char* pA = &a;
	int b = 100;
	int* pB = &b;
	double c = 3.14;
	double* pC = &c;

	// sizeof() => 해당 변수의 size를 리턴하는 연산자
	printf("pA의 크기 >> %d byte \n", sizeof(pA)); // 주소값 => 32bit 4바이트/ 64bit 8바이트
	printf("pB의 크기 >> %d byte \n", sizeof(pB));
	printf("pC의 크기 >> %d byte \n", sizeof(pC));

	// 포인터 변수가 가르키고 있는 실제 메모리의 크기
	printf("*pA의 크기 : %d byte \n", sizeof(*pA)); // 1
	printf("*pB의 크기 : %d byte \n", sizeof(*pB)); // 4
	printf("*pC의 크기 : %d byte \n", sizeof(*pC)); // 8
}