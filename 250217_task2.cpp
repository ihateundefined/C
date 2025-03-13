#include <stdio.h>

void main()
{
	/*
	* 다음과 같이 출력
	* 이름 : 이창현
	* 나이 : 18세
	* 성적 : A
	* 
	* 나이의 숫자와 성적의 문자는 서식 문자열에 직접 쓰지 말고,
	* 서식 문자 %d, %c를 각각 사용하기
	*/

	char name[] = "이창현";
	int age = 18;
	char grade = 'A';

	printf("이름 : %s\n나이 : %d세\n성적 : %c", name, age, grade);
}