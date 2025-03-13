#include <stdio.h>
#include <corecrt_malloc.h> // malloc library

void main()
{
	/*
	// 동적 메모리 할당이 필요한 이유
	int num = 0;

	printf("학생수를 입력하세요 >>> ");
	scanf_s("%d", &num);

	int student[num];
	*/

	/*
	// 동적 메모리 할당 예제
	int* student;
	int num = 0;
	printf("학생수 입력 >>> ");
	scanf_s("%d", &num);

	// stack 메모리 4 바이트 -> 가르키고 있다 heap 메모리 400바이트
	student = (int*)malloc(sizeof(int) * num); // 4 바이트 * 학생수 -> malloc에 할당
	// 이렇게 포인터 변수를 받으면 해야하는 것? null 인지 체크

	if (student == NULL) // "null"을 "NULL"로 변경
	{
		printf("메모리가 부족하여 할당할 수 없습니다\n");
		return;
	}
	printf("메모리 할당이 잘 이루어 짐! 할당된 메모리 크기는 %d입니다\n", sizeof(int) * num);

	// 마지막 -> 메모리 누수 막기 위해 free 써준다
	free(student);
	*/

	/*
	// 동적 메모리 선언하고, 값 할당해보기
	int* student;
	int num = 0;
	printf("학생수 입력 >>> ");
	scanf_s("%d", &num);

	student = (int*)malloc(sizeof(int) * num);

	if (student == NULL)
	{
		printf("메모리가 부족하여 할당할 수 없습니다\n");
		return;
	}

	// 메모리 사용
	//printf("1번째 학생 성적 입력 >>> ");
	//scanf_s("%d", &student[0]);

	// 반복문으로 코드 개선
	for (int i = 0; i < num; i++)
	{
		printf("%d번째 학생 성적 입력 >>> ", i+1);
		scanf_s("%d", &student[i]);
	}

	// 총점 및 평균 구하기
	int total = 0;

	for (int i = 0; i < num; i++)
	{
		printf("%d번째 학생 성적 -> %d\n", i+1, student[i]);
		total += student[i];
	}

	printf("학생들의 총 점은 >> %d, 평균은 >>> %.2f\n", total, (double)total / num);

	free(student);
	*/
}