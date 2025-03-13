#include <stdio.h>

void main()
{
	/*
	* 1. 반복문을 사용
	* 2. 1부터 사용자가 입력한 정수까지의 합을 출력 
	*/
	
	int number = 0;

	printf("1보다 큰 정수를 입력해 주세요! >>> ");
	scanf_s("%d", &number);

	if (number < 2) {
		printf("잘못된 입력입니다. 숫자 범위를 다시 확인해주세요!\n");
		return;
	}

	int sum = 0;
	for (int i = 1; i < number+1; i++) {
		sum += i;
	}
	printf("1부터 입력한 수인 %d까지 합은 %d입니다.\n", number, sum);
}