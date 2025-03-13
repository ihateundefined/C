/*
* 1. 길이가 100인 정수형 배열을 선언
* 2. 이 배열에 인덱스 0부터 99까지의 배열의 요소에 값을 1부터 100까지 입력
* 3. 입력한 배열의 요소를 모두 더한 총합을 출력하라.
*/

#include <stdio.h>

void main()
{
	int arr[100];
	int sum = 0;

	for (int i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
		sum += arr[i];
	}

	printf("배열의 모든 요소를 더한 총 합은 >>> %d\n", sum);
}