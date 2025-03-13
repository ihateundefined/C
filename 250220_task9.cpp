#include <stdio.h>

/*
* 
* 1. 앞에서 작성한 예제를 참고
* 2. 배열 arr1의 값을 배열 arr2에 복사하되, 배열 요소를 역순으로 저장
* 3. arr2 배열의 요소를 모두 출력
*/

void main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5];
	
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = arr1[4 - i];
	}

	for (int i = 0; i < 5; i++)
	{
		printf("arr2[%d] 값 >> %d\n", i, arr2[i]);
	}
}