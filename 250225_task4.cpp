/*
* 1. 값에 의한 호출 방식에 의거해서 함수를 호출하되, 두 개의 값을 바꾸는 함수인 Swap() 함수를 작성
* 2. main() 함수에서 Swap 함수 호출 전 값을 출력
* 3. 함수 안에서 변경 후 값을 출력
* 4. 함수 밖에서 값을 출력
* 예) 초기값 a = 1, b = 2
* 함수 안 변경 x =2, y = 1
* 함수 밖 출력 a =1, b =2
*/

#include <stdio.h>

void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;

	printf("함수 안 변경 x = %d, y = %d\n", x, y);
}

void main()
{
	int a = 1;
	int b = 2;

	printf("초기값 a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("함수 밖 출력 a = %d, b = %d\n", a, b);
}