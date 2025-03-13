#include <stdio.h>

/*
* 1. 사각형의 넓이를 구하는 함수 작성. -> main에서 호출하여 출력
* 2. 사각형 넓이는 가로 길이 * 세로 길이
* 3. 사용자로부터 정수 두개 입력받기
* 예) void 함수이름(int width, int height)
* { }
*/

void area(int width, int height)
{
	printf("사각형의 넓이는 다음과 같습니다 >>> %d\n", width * height);
}

void main()
{
	int width = 0;
	int height = 0;

	printf("사각형의 넓이를 구해볼게요.\n");
	printf("가로 길이를 정수로 입력하세요 >>> ");
	scanf_s("%d", &width);
	
	printf("세로 길이를 정수로 입력하세요 >>> ");
	scanf_s("%d", &height);

	area(width, height);
}