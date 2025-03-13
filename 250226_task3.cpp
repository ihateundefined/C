/*
* 1. 길이가 2인 정수형 배열을 선언
* 2. 사용자로부터 두 개의 값을 입력 받아 배열의 각 요소에 저장
* 3. 두 수를 비교하여 큰 수를 출력
* 4. 단, 두 수를 비교하여 큰 수를 출력하는 기능은 함수로 처리
* 예)
* void Max(int a, int b)
* {
* }
*/

#include <stdio.h>

void Max(int a, int b)
{
	if (a > b)
	{
		printf("큰 수는 >> %d\n", a);
	}
	else if (a < b) {
		printf("큰 수는 >> %d\n", b);
	}
	else {
		printf("두 수는 같습니다 >> %d\n", a);
	}
}

void main()
{
	int arr[2];

	printf("정수 두 개 입력 >>> ");
	scanf_s("%d %d", &arr[0], &arr[1]);

	Max(arr[0], arr[1]);
}