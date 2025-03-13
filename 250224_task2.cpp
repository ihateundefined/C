#include <stdio.h>

/* 1. 자료형이 정수형 int, 크기가 5인 배열 arr
* 2. 포인터 ptr, 이 배열의 첫번째 요소의 주소값을 가지고 있음
* 3. 이 포인터를 이용하여 배열의 가운데로 이동 후, 그 요소의 값을 출력하는 프로그램 작성하기
* 예 )
* 초기화는 다음과 같이 =>
* int arr[5] = {1, 2, 3, 4, 5};
*/

void main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr;
	ptr = &arr[0];

	printf("ptr의 주소값은? >>> %d\n", ptr);
	printf("ptr이 가리키는 값은? >>> %d\n", *ptr);
	
	printf("arr[5]의 가운데 주소값은? >>> %d\n", (ptr+2));
	printf("arr[5]의 가운데 값은? >>> %d\n", *(ptr+2));
}