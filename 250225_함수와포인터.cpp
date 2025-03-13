#include <stdio.h>

// 배열로 전달하고 받는게 용이
// 배열의 이름이 포인터니까 배열로 만들어서 주소값을 넘겨주는 게 용이
/*
void func(int a, int b, int c, int d, int e)
{
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
}
*/

// 주소값을 복사해서 참조하는 것 call by reference
int func(int* pArr, int parameterSize)
{
	printf("func 함수에서 출력 >>> \n");
	printf("%x\n", *pArr);
	printf("%x\n", pArr);
	
	/*
	for (int i = 0; i < 5; i++)
	{
		printf("%x\n", *(pArr+i));
	}
	*/

	/*
	printf("배열의 요소의 누적 합 구하기****\n");
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += *(pArr + i);
	}
	printf("누적합은 >>> %d\n", sum);
	*/
	
	int sum = 0;

	for (int i = 0; i < parameterSize; i++)
	{
		sum += *(pArr + i);
	}

	return sum;
}

void main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	//func(arr[0], arr[1], arr[2], arr[3], arr[4]);

	printf("%x\n", &arr);
	/*
	for (int i = 0; i < 5; i++)
	{
		printf("%x\n", &arr+ i);
	}
	*/

	int size = sizeof(arr) / sizeof(int); // 배열의 전체 메모리 / 단위 메모리 4
	// call by value

	int hap = func(arr , size);
	printf("func함수에서 더한 결과는 >>> %d\n", hap);

	printf("main 함수에서 출력 >>> \n");
	/*
	for (int i = 0; i < 5; i++)
	{
		printf("%x\n", arr[i]);
	}
	*/

}