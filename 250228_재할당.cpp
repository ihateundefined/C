#include <stdio.h>
#include <corecrt_malloc.h>

void main()
{
	// 동적 재할당 예제
	int* student;
	int num = 5;

	// 앞에서 선언한 malloc은 뒤의 realloc 내부에서 free 처리 해줌
	// 내가 따로 free해야 할 필요가 없음
	student = (int*)malloc(sizeof(int) * num);

	if (student == NULL)
	{
		printf("메모리가 부족하여 할당할 수 없습니다.\n");
		return;
	}

	// 메모리 사용
	for (int i = 0; i < num; i++)
	{
		student[i] = i + 1;
	}

	int* reStudent;
	// 앞에 student로 값 가져오고, 뒤에 새로 공간 붙여줌
	reStudent = (int*)realloc(student, sizeof(int)*10);
	for (int i = 5; i < 10; i++)
	{
		reStudent[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", reStudent[i]);
	}

	free(reStudent);
}