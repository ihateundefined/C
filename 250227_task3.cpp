/*
* 1. 정수형 배열 한 개를 선언
* 2. 초기값에 따라 배열의 길이가 결정되도록 선언
* 3. 선언한 배열의 길이만큼 배열의 요소를 출력하되,
* 4. 배열의 이름을 이용하여 (배열의 이름은 포인터와 같다고 하였다.) 포인터로 접근하는 형태로 배열의 요소를 출력
*/

#include <stdio.h>

void main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int length = sizeof(a) / sizeof(int);
	
	printf("배열의 요소 출력 >>> ");
	for (int i = 0; i < length; i++)
	{
		printf("%d ", *(a + i));
	}
}