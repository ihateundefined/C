#include <stdio.h>

/*
* 1. 사용자로부터 정수를 하나 입력 받는다.
* 2. Factorial 이라는 이름의 함수를 만든다
* 3. 입력 받은 정수를 전달 인자로 전달한다.
* 4. Factorial 이라는 함수는 수학에서의 팩토리얼과 똑같은 기능을 한다 -> 3!이면 3*2*1의 결과값
* 5. 결과값의 경우는 Factorial 함수의 두 번째 전달인자에 포인터 형태로 전달한다
* 6. 함수의 동작 후 참조호출에 의해 결과 값이 전달인자로 리턴되도록 한다.
*/

int Factorial(int a, int* factorial)
{
	for (int i = a; i > 0; i--)
	{
		*factorial *= i;
	}
	return *factorial;
}

void main()
{
	int num = 0;
	
	printf("정수 하나 입력 받기 >> ");
	scanf_s("%d", &num);

	int factorial = 1;

	Factorial(num, &factorial);
	
	printf("Factorial 결과 %d\n", factorial);
}