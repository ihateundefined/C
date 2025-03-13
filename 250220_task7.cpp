#include <stdio.h>

/*
* 1. 책읽기 마라톤 프로그램
* 2. 내가 읽은 책의 페이지 수를 누적 계산하는 기능
* 3. 그날 그날 읽은 페이지 수를 사용자로부터 입력 받기 -> 최종 누적 페이지 수에 더해짐
* 4. 한 번의 출력이 끝나면 다시 입력받고, 누적 페이지를 출력
* 5. 이 과정은 사용자가 -1을 입력할 때까지 반복
* 6. 이 기능을 함수로 구현
* 7. 페이지의 누적 결과를 저장하는 변수를 -> 전역 변수로, static 변수로 구현 해보기
* 예) 읽은 페이지 입력 >> 30
* 최종 누적 페이지 >> 30
* 읽은 페이지 입력 >> 20
* 최종 누적 페이지 >> 50
* 읽은 페이지 입력 >> -1
* 더 분발하세요.
*/

/*
// static 변수
void marathon(int page)
{
	static int totalPages = 0;
	totalPages += page;
	
	printf("최종 누적 페이지 >> %d\n", totalPages);
}

void main()
{
	int page = 0;

	while (true)
	{
		printf("읽은 페이지를 입력하세요 >> ");
		scanf_s("%d", &page);

		if (page == -1)
		{
			break;
		}

		marathon(page);
	}
	printf("분발하세요~\n");
}
*/

// 전역 변수
int totalPages = 0;

void marathon(int page)
{
	totalPages += page;
	printf("최종 누적 페이지 >> %d\n", totalPages);
}

void main()
{
	int page = 0;

	while (true)
	{
		printf("읽은 페이지를 입력하세요 >> ");
		scanf_s("%d", &page);

		if (page == -1)
		{
			break;
		}
		
		marathon(page);
	}
	printf("분발하세요~\n");
}