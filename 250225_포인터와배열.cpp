#include <stdio.h>

void main()
{
	/*
	// 배열의 이름은 '포인터 상수'
	int arr[] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < 5; i++)	{
		printf("%d\n", arr[i]);
	}

	for (int i = 0; i < 5; i++)	{
		printf("%x\n", &arr[i]);
	}

	printf("%x\n", arr); // arr[0]의 주소값 .. %x로 출력
	*/

	/*
	// 포인터 상수 예제
	int arr[] = { 1, 2, 3, 4, 5 };
	int temp = 10;

	// 포인터는 상수이기 때문에 대입이 불가 .. 포인터 변수가 아님
	arr = temp;
	arr = &temp;
	*/

	/*
	// arr 이용해서 값 출력하기
	int arr[] = { 1, 2, 3, 4, 5 };
	printf("%x\n", arr);
	
	for (int i = 0; i < 5; i++)	{
		printf("%x\n", (arr+i)); // 주소값 출력
		printf("%x\n", *(arr+i)); // 값 출력
	}
	*/

	/*
	// 포인터도 배열로 사용 가능
	int arr[] = { 1, 2, 3, 4, 5 };
	int* pArr; // 주소값만 저장할 수 있음
	pArr = arr; // arr이 주소값을 가지고 있고, pArr은 주소값만 받는 변수니까 성립!
	// 변수 = 상수

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]); // 값 출력
		printf("%d\n", pArr[i]); // 포인터 배열로 값 출력
	}
	for (int i = 0; i < 5; i++) {
		printf("%x\n", *(pArr + i)); // 값 출력
	}
	*/

	/*
	// 문자열 상수와 포인터
	// "CProgramming" -> 문자열 상수
	// 변경할 수 있는 문자열 -> 문자열 변수
	// 변경할 수 없는 문자열 -> 문자열 상수
	// 문자열 타입 string

	char str[] = "love"; // 문자열 변수
	// char* pStr; // pStr은 주소값만 저장하는 포인터 문자열 상수
	const char* pStr1 = "you"; // 문자열 상수 즉, you가 들어있는 메모리의 주소값만 가지고 있음

	printf("%s\n", str);
	// printf("%s\n", pStr);
	printf("%s\n", pStr1);

	str[0] = 'r';
	// pStr1[0] = 'T';
	printf("%s\n", str);
	*/
}