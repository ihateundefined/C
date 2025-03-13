#include <stdio.h>

union unTemp
{
	char a;
	int b;
	double c;
}un;

void main()
{
	// 세 변수 모두 주소값 동일 -> 세 변수가 메모리 공유 불가 -> 한 변수씩 메모리에 할당
	printf("주소 : %x, 크기 : %d\n", &un.a, sizeof(un.a));
	printf("주소 : %x, 크기 : %d\n", &un.b, sizeof(un.b));
	printf("주소 : %x, 크기 : %d\n", &un.c, sizeof(un.c));

	// 한 변수씩 메모리에 할당 되는것 확인 예제
	un.a = 'A';
	printf("문자형 a : %c\n", un.a);
	un.b = 100;
	printf("정수형 b : %d\n", un.b);
	un.c = 3.14;
	printf("실수형 c : %.2f\n", un.c); // 이렇게 하면 각 변수마다 메모리에 저장되어 출력이 가능
	printf("문자형 a : %c\n", un.a); // 이런 경우 출력 불가
};