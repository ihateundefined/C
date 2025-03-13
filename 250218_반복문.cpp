#include <stdio.h>

void main()
{
	/*
	// 같은 문장 5번 출력하기
	printf("programming\n");
	printf("programming\n");
	printf("programming\n");
	printf("programming\n");
	printf("programming\n");
	*/

	/*
	// while문 사용
	int i = 0;

	while (i < 5)
	{
		printf("programming\n");
		i++;
		printf("%d\n", i);
	}
	*/

	/*
	// 구구단 2단
	int i = 1;
	while (i < 10)
	{
		printf("2 * %d = %d\n", i, (2*i));
		i++;
	}
	printf("구구단 출력 끝!\n");
	*/

	/*
	// do~while문

	int i = 0;

	do {
		printf("Programming\n");
		i++;
		printf("%d\n", i);
	} while (i < 5);
	*/

	/*
	// do~while문 예제
	int sum = 0;
	int input = 0;

	do {
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &input);
		sum = sum + input;
	} while (input != 0);
	printf("총 합은 %d 입니다.\n", sum);
	*/

	/*
	// do~while에서 while로 바꾸기
	int input = 1;
	int sum = 0;

	while (input != 0)
	{
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &input);
		sum = sum + input;
	}
	printf("총 합은 %d 입니다.\n", sum);
	*/

	/*
	// for문
	for (int i = 0; i < 5; i++)
	{
		printf("Programming, %d\n", i);
	}
	*/

	/*
	// for문으로 만드는 구구단
	for (int i = 1; i < 10; i++) {
		printf("2 * %d = %d\n", i, (2 * i));
	} printf("2단 끝!\n");
	*/

	/*
	// 몇단으로 할까?
	int num = 1;
	
	printf("구구단 몇 단이 궁금한가요? 입력하세요 >>> ");
	scanf_s("%d", &num);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", num, i, (num * i));
	} printf("%d단 끝!\n", num);
	*/
}