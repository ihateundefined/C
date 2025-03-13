#include <stdio.h>

void main()
{
	/*
	* 1. 성적 점수인 정수 값을 한 개 입력 받는다.
	* 2. 단, 입력하는 수의 범위는 0부터 100 사이
	* 3. 100 ~ 91점은 A학점, 90 ~ 81점은 B학점, 80 ~ 71점은 C학점, 70~ 61점은 D학점, 60점 이하는 F 학점
	* 출력 예) 점수를 입력하시오 : 95 / 학점은 A 입니다.
	* switch ~ case 문을 사용하여 변경하라.
	*/

	int score = 0;
	char grade = 'A';

	printf("점수(정수, 0~100 사이)를 입력하시오 : ");
	scanf_s("%d", &score);

	if (score < 0 || score > 100) {
		printf("점수 범위를 다시 확인해주세요!\n");
		return;
	}

	switch (score / 10)
	{
	case 10:
	case 9:
		grade = 'A';
		if (score == 90) {
			grade = 'B';
		}
		break;
	case 8:
		grade = 'B';
		if (score == 80) {
			grade = 'C';
		}
		break;
	case 7:
		grade = 'C';
		if (score == 70) {
			grade = 'D';
		}
		break;
	case 6:
		grade = 'D';
		if (score == 60) {
			grade = 'F';
		}
		break;
	default:
		grade = 'F';
		break;
	}
	printf("학점은 %c 입니다.\n", grade);
}