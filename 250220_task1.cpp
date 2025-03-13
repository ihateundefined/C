#include <stdio.h>

/*
* 1. 정수형 변수 1개를 전달인자로 받는 함수 만들기.
* 2. 전달받은 정수형 변수에 2를 곱하여 리턴
* 3. 이 함수를 main에서 호출하여 출력
* 예)
int 함수이름(int a)
{
	return a * 2;
}
*/

int multiple(int a)
{
	return a * 2;
}

void main()
{
	int a = 0;
	
	printf("정수 한개를 입력해주세요 >>> ");
	scanf_s("%d", &a);

	printf("입력한 수를 두배했습니다 >>> %d\n", multiple(a));
}