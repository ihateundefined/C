/*
* 1. 길이가 5인 정수형 배열을 선언
* 2. 초기값을 {3, 5, 2, 11, 10} 이라고 설정
* 3. 5개의 배열의 요소 중 가장 큰 값을 찾아서 출력
* 	변수 선언 예)
*	int a[] = {3, 5, 2, 11, 10};
*	int i = 0;
* 	int imax = a[0];
*/

#include <stdio.h>

void main()
{
	int a[5] = { 3, 5, 2, 11, 10 };
	int max = a[0];

	for (int i = 0; i < 5; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("배열의 요소 중 가장 큰 값은 >>> %d\n", max);
}