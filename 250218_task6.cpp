#include <stdio.h>

void main()
{
	/*
	* 1. 나이를 정수로 입력 받는다.
	* 2. 13세 미만이면 “어린이입니다.”를 출력
	* 3. 13세 이상 19세 미만이면 “청소년입니다.”
	* 4. 19세 이상이면 “성인입니다.”를 출력
	*/

	int age = 1;

	printf("당신의 나이를 정수로 입력해주세요 : ");
	scanf_s("%d", &age);

	if (age > 0 && age < 13) {
		printf("어린이입니다.\n");
	}
	else if (age >= 13 && age < 19) {
		printf("청소년입니다.\n");
	}
	else if (age >= 19) {
		printf("성인입니다.\n");
	}
	else {
		printf("잘못된 입력입니다.\n");
	}
}