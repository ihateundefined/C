/*
* 1. 정수형 배열 한 개를 선언
* 2. 초기값에 따라 배열의 길이가 결정되도록 선언
* 3. func()라는 함수를 선언
* 4. 앞서 선언한 배열에서 배열의 이름을 함수의 전달인자로 넘긴다.
* 5. 실인수로 넘어온 배열의 이름을 함수에서는 형식인수로 포인터로 받는다고 하였다.
* 6. 함수의 형식인수를 이용하여 배열의 요소 값을 함수 안에서 모두 출력
* 예) int a[] = {1,2,3,4,5};
*	  func(a);
*/

#include <stdio.h>

void func(int *arr, int length)
{
	printf("배열 요소 값 출력 >> \n");
	for (int i = 0; i < length; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void main()
{
	int arr[] = { 1,2,3,4,5 };
	int length = sizeof(arr) / sizeof(int);

	func(arr, length);
}