#include <stdio.h>

/*
* 1. 길이가 5인 정수형 배열을 선언
* 2. 초기값을 {3, 5, 2, 11, 10} 이라고 설정
* 3. 5개의 배열의 요소 중 가장 큰 값을 찾아서 출력해 보도록
*/

void main()
{
	int arr[5] = { 3, 5, 2, 11, 10 };
	int largest = arr[0];

	for (int i = 1; i < 5; i++)
	{
		if (arr[i] > largest)
		{
			largest = arr[i];
		}
	}
	printf("최대값은 >>> %d\n", largest);
}