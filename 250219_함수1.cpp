#include <stdio.h>

int Add(int a, int b) // 전달인자, 매개변수, 파라미터, 인수, 인수목록
{
	return a + b; // 값을 반환하면서, 함수를 끝낸다
}

/*
double Add(double c, double d)
{
	return c + d;
}
*/

void main()
{
	/*
	printf("실수 두 개를 입력하세요 >>> ");
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);

	int sum = Add(a, b);
	printf("입력한 두 수의 합은 >>> %d\n", sum);
	*/

	/*
	double c = 2.3;
	double d = 3.3;
	scanf_s("%lf %lf", &c, &d);

	double sum2 = Add(c, d);
	printf("입력한 두 수의 합은 >>> %f\n", sum2);
	*/

	int x = 10;
	int y = 20;

	// call by value .. 복사
	// x -> int a로 넘어가는것 엄밀히 말하면 복사임
	// 값만 복사하는 것이 아니라 나중에는 주소값을 복사하게 된다
	// 주소값을 넘기게 되면? 해당 메모리를 가르키게 된다 call by reference

	int sum3 = Add(x, y);
	printf("%d\n", sum3);
}