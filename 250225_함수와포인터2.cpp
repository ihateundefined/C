#include <stdio.h>

/*
// call by value
// 여기에서 값을 바꿔봐도 main 함수에서는 바뀌지 않음
// 메모리가 다르니까
void swab(int a, int b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;

	printf("swab 함수에서 출력 >>> \n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}

void main()
{
	int x = 10;
	int y = 20;
	//int temp = 0;

	printf("1. 기존 값 출력) x = %d, y = %d\n", x, y);

	//temp = x;
	//x = y;
	//y = temp;
	//printf("2. 바꿔주기) x = %d, y = %d\n", x, y);
	
	swab(x, y);
	printf("3. swab 함수) x = %d, y = %d\n", x, y);
}
*/

/*
// call by reference
void callRef(int* pX) // a의 메모리	주소값을 받아옴
{
	*pX += 3;
	printf("int a의 값 출력 >>> %d\n", *pX);
}

void main()
{
	int a = 1;
	//callRef(a); // call by value

	callRef(&a); // call by reference
	printf("main 함수에서 출력 >>> %d\n", a);
}
*/

/*
// call by reference 예제
void swap(int* pX, int* pY) // * 사용으로 주소값만 전달받도록 함
{
	int temp = 0;
	temp = *pX; // temp = x
	*pX = *pY; // x = y
	*pY = temp; // y = temp
}
void main()
{
	int x = 10;
	int y = 20;
	printf("1. 기존 값 출력) x = %d, y = %d\n", x, y);

	swap(&x, &y); // 주소값으로 넘기기
	// 함수를 빠져나왔어도 값이 바뀌게 된다, 메모리의 값을 바꿔줬기 때문에
	printf("2. swap 함수) x = %d, y = %d\n", x, y);
}
*/