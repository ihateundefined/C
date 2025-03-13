#include <stdio.h>

void main()
{
	/*
	* 1. 사용자로부터 입력받은 숫자에 해당하는 구구단을 출력
	* 2. scanf 를 사용하여 사용자로부터 정수를 입력받으시오
	*/
	
	int num = 1;

	printf("구구단 몇 단이 궁금한가요? 정수를 입력하세요 >>> ");
	scanf_s("%d", &num);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", num, i, (num * i));
	} printf("%d단 끝!\n", num);
}