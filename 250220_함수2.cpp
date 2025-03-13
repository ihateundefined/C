#include <stdio.h>

/*
// 함수 호출 연습
int Add(int a, int b) // 전달인자, 매개변수, 파라미터, 인수
{
	return a + b;
}

void printStart()
{
	printf("==== programming start! ====\n");
	printf("두 개의 정수 입력하기 >>> ");
}

void printSum(int result)
{
	printf("두 수의 합은 %d 입니다.\n", result);
	printf("==== programming end! ====\n");
}

void main()
{
	int x = 10;
	int y = 20;

	printStart();

	int sum = Add(x, y);
	// printf("%d\n", sum);
	printSum(sum);
}
*/

/*
// 메모리의 할당과 소멸
void func2()
{
	int local = 20;
	printf("local = 20 메모리 할당\n");
	printf("local = 20 메모리 소멸\n");
}

void func1()
{
	int local = 10;
	printf("local = 10 메모리 할당\n");
	func2();
	printf("local = 10 메모리 소멸\n");
}

void main()
{
	int val = 0;
	printf("val = 0 메모리 할당\n");
	func1();
	printf("val = 0 메모리 소멸\n");
}
*/

/*
// 전역함수
void printStart()
{
	printf("==== programming start! ====\n");
	printf("두 개의 정수 입력하기 >>> ");
}

void printSum(int result)
{
	printf("두 수의 합은 %d 입니다.\n", result);
	printf("==== programming end! ====\n");
}

int global;

void Add(int a, int b)
{
	global = a + b;
}

void main()
{
	int x = 10;
	int y = 20;

	printStart();
	Add(x, y);
	printSum(global);
}
*/

/*
// static 변수
void func()
{
	static int value = 0;
	value++;
	printf("%d\n", value);
}

void main()
{
	for (int i = 0; i < 5; i++)
	{
		func();
	}
}
*/