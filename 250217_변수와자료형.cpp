#include <stdio.h>

/*
* 하나의 프로젝트에는 main 함수가 하나여야함
* 다른 파일에 main 함수가 있다면, 그 파일은 빌드에서 제외시킬 것
*/ 

void main()
{
	/*
	// 자료형(타입) 변수명;
	int value;
	value = 100; // 할당

	int num = 5; // 초기화

	// d 10진수, c 단일 문자, f 부호 있는 10진 실수, s 문자열, x 16진수
	printf("%x %x\n", value, num);
	*/

	/*
	// char 형
	int value = 100;
	char ch = 'C'; // 작은 따옴표 사용 .. 문자 하나에 적용

	printf("정수 : %d, 문자 : %c", value, ch);
	*/

	/*
	// 정수형
	int width = 10;
	int height = 20;

	printf("사각형의 넓이 : %d\n", width * height);
	*/

	/*
	// 실수형 : 소수점을 가지는 수 ... 부동소수점
	double area = 0.0;
	int radius = 5;

	area = radius * radius * 3.14;

	printf("원의 넓이 : %f \n", area);
	printf("원의 넓이 : %.2f \n", area);
	*/

	/*
	// 문자열
	char ch1 = 'A'; // 단일문자의 경우 '' single
	char ch2 = 'b';
	char ch3 = '1';

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	*/

	
	// scanf
	int input1 = 0;
	int input2 = 0;

	// scanf() // ms에서는 보안 때문에 scanf_s를 권장
	scanf_s("%d%d", &input1, &input2);
	//scanf_s("%d", &input2);

	printf("%d\n", input1 + input2);
	printf("%d", input1);
}
