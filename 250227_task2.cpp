/*
* 1. 정수형 배열 한 개를 선언
* 2. 초기값에 따라 배열의 길이가 결정되도록 선언
* 3. 선언한 배열의 길이만큼 배열의 요소를 출력
* 4. 배열의 각 요소의 주소를 출력
* 5. 배열의 이름을 출력
* 배열 선언 예)
* int a[] = {1,2,3,4,5};
* 배열 출력 예)
* 배열의 요소 출력 : 1 2 3 4 5
* 배열의 주소 출력 : ……………
* 배열의 이름 출력 : ……………
*/

#include <stdio.h>

void main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int length = sizeof(a) / sizeof(int);
	
	printf("배열의 요소 출력 >>> ");
	for (int i = 0; i < length; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n배열의 주소 출력 >>> ");
	for (int i = 0; i < length; i++)
	{
		printf("%p ", &a[i]);
	}

	printf("\n배열의 이름 출력 >>> %p", a);
}