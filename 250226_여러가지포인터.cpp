#include <stdio.h>

/*
// 포인터의 포인터
void main()
{
	void* a;
	int b = 1234;

	a = &b;

	//printf("%d\n", *a);
	printf("%d\n", *(int*)a); // 명시적 형변환 type casting
}
*/

/*
// 함수 포인터
int Plus(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

void main()
{
	// 간접적으로 함수 호출 예정
	int (*fPtr)(int x, int y); // 함수 포인터 선언

	fPtr = Plus; // fPtr이 곧 Plus 함수임
	int result = fPtr(10, 20);
	printf("%d\n", result);

	fPtr = Minus; // fPtr이 곧 Minus 함수임
	result = fPtr(10, 20);
	printf("%d\n", result);
}
*/