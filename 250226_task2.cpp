/*
* 1. 길이가 2인 정수형 배열을 선언
* 2. 사용자로부터 두 개의 값을 입력 받아 배열의 각 요소에 저장
* 3. 두 수를 비교하여 큰 수를 출력
*/

#include <stdio.h>

void main()
{
	int arr[2];

	printf("정수 두 개 입력 >>> ");
	scanf_s("%d %d", &arr[0], &arr[1]);

	if (arr[0] > arr[1])
	{
		printf("큰 수는 >> %d\n", arr[0]);
	}
	else if (arr[0] < arr[1]) {
		printf("큰 수는 >> %d\n", arr[1]);
	}
	else {
		printf("두 수는 같습니다 >> %d\n", arr[0]);
	}
}