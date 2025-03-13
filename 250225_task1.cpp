#include <stdio.h>

/*
* 1. 사용자로부터 두 수의 입력을 받아
* 2. 두 수의 합과 곱을 구하는 프로그램을 작성할 것
* 3. 두 수의 합과 곱의 기능은 한 개의 함수 안에서 함수의 합과 곱의 연산이 이루어져야한다
* 4. return 대신 아래와 같이 ...?
* input말고 output으로도 사용 가능
* out값을 전달인자로 ..?
* void func(int a, int b, int hap, int gop)
* {
* 
* }
* 5. call by reference 사용할 것
* 
* 예 )
* 두 수를 입력 >> 10 20
* 합 : 30
* 곱 : 200
*/

void func(int a, int b, int* hap, int* gop)
{
	*hap = a + b;
	*gop = a * b;
}

void main()
{
	int a = 0;
	int b = 0;
	
	printf("두 정수를 입력 >> ");
	scanf_s("%d %d", &a, &b);

	int hap = 0;
	int gop = 0;

	func(a, b, &hap, &gop);
	
	printf("합 : %d\n", hap);
	printf("곱 : %d\n", gop);
}