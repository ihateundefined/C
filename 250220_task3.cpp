#include <stdio.h>

/*
* 1. 원의 넓이 구하는 함수 작성.
* 2. 원 넓이는 반지름 * 반지름 * 3.14
* 3. 사용자로부터 정수 입력 받기 -> 반지름
* 4. 원의 넓이 출력하는 함수 -> 이름 circle
* 5. main에서 호출하자
*/

void circle(int radian)
{
	printf("원의 넓이 >>> %.2f\n", radian * radian * 3.14);
}

void main()
{
	int radian = 0;

	printf("원의 반지름으로 정수를 하나만 입력하세요 >>> ");
	scanf_s("%d", &radian);

	circle(radian);
}