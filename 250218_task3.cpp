#include <stdio.h>

void main()
{
	/*
	* 1. 세 개의 정수를 입력 받는다
	* 2. 가장 작은 최소값을 출력하는 프로그램을 작성
	*/

	int a = 0;
	int b = 0;
	int c = 0;

	printf("정수 3개를 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	if (a < b && a < c) {
		printf("첫번째로 입력한 값이 최솟값이며, %d입니다.\n", a);
	}
	else if (b < a && b < c) {
		printf("두번째로 입력한 값이 최솟값이며, %d입니다.\n", b);
	}
	else if (c < a && c < b) {
		printf("마지막으로 입력한 값이 최솟값이며, %d입니다.\n", c);
	}
	else if (c > a && a == b) {
		printf("첫번째, 두번째로 입력한 값이 같고 최솟값이며, %d입니다.\n", a);
	}
	else if (b > a && a == c) {
		printf("첫번째, 세번째로 입력한 값이 같고 최솟값이며, %d입니다.\n", a);
	}
	else if (a > b && b == c) {
		printf("두번째, 세번째로 입력한 값이 같고 최솟값이며, %d입니다.\n", b);
	}
	else if (a == b && b == c) {
		printf("첫번째, 두번째, 세번째로 입력한 값이 다 같은 값이며, %d입니다.\n", a);
	}
	else {
		printf("잘못된 입력입니다.\n");
	}
}  