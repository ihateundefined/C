#include <stdio.h>

/*
* 1. 길이가 3인 배열 arr1과 arr2를 선언
* 2. arr1배열은 선언과 동시에 {1,2,3}으로 초기화
* 3. arr1을 arr2에 복사
* 4. arr2 배열의 요소를 모두 출력
*/

void main()
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[3];

	for (int i = 0; i < 3; i++)
	{
		arr2[i] = arr1[i];
		printf("arr2[%d] 값 >> %d\n", i, arr2[i]);
	}
}