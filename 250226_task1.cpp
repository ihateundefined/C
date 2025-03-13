#include <stdio.h>

/*
* 1. void 형 포인터 변수와 double형의 변수 각각 선언
* 2. double 형 변수를 void형 포인터 변수가 가리키게 한다
* 3. 그리고 void형 포인터 변수를 통해서 가리키고 있는 변수를 화면에 출력
* 예) void *a;
*	  double b = 3.14;
*/

void main()
{
	void* a;
	double b = 3.14;

	a = &b;

	printf("%.2f\n", *(double*)a);
}