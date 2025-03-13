#include <stdio.h>

void main()
{
	/*
	* 1. 사용자로부터 하나의 정수 입력받기 -> 점수로 활용
	* 2. 점수가 60 이상이면 -> 합격입니다 출력
	* 3. 60점 미만이면 -> 불합격입니다 출력
	* 4. 단, 합격자 중에 90점 이상이면 추가로 “장학대상입니다.” 를 출력하도록 한다.
	*/

	int score = 0;
	printf("점수를 정수로 입력해주세요 : ");
	scanf_s("%d", &score);

	if (score >= 60) {
		printf("합격입니다.\n");
		if (score >= 90) {
			printf("장학대상입니다.\n");
		}
	}
	else if (score < 60) {
		printf("불합격입니다.\n");
	}
	else {
		printf("잘못된 입력입니다.\n");
	}
}