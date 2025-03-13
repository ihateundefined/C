#include <stdio.h>

void main()
{
	/*
	* 1. 성적 점수인 정수 값을 한 개 입력 받는다.
	* 2. 단, 입력하는 수의 범위는 0부터 100 사이
	* 3. 100 ~ 91점은 A학점, 90 ~ 81점은 B학점, 80 ~ 71점은 C학점, 70~ 61점은 D학점, 60점 이하는 F 학점
	* 참고) 관계 연산자의 대소 비교 시 ‘크거나 같다’ 혹은 ‘작거나 같다’ 와 같은 연산자는 ‘<=’, ‘>=’ 로 사용된다.
	* 두 조건을 모두 만족해야 하는 AND 연산자는 ‘&&’ 이다.
	* 출력 예) 점수를 입력하시오 : 95 / 학점은 A 입니다.
	*/

	int score = 0;
	char grade = 'A';

	printf("점수(정수, 0~100 사이)를 입력하시오 : ");
	scanf_s("%d", &score);

	if (score < 0 || score > 100) {
		printf("점수 범위를 다시 확인해주세요!\n");
		return;
	}
	
	if (score >= 91) {
		grade = 'A';
	}
	else if (score >= 81) {
		grade = 'B';
	}
	else if (score >= 71) {
		grade = 'C';
	}
	else if (score >= 61) {
		grade = 'D';
	}
	else {
		grade = 'F';
	} printf("학점은 %c 입니다.\n", grade);
}