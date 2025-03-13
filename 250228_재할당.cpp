#include <stdio.h>
#include <corecrt_malloc.h>

void main()
{
	// ���� ���Ҵ� ����
	int* student;
	int num = 5;

	// �տ��� ������ malloc�� ���� realloc ���ο��� free ó�� ����
	// ���� ���� free�ؾ� �� �ʿ䰡 ����
	student = (int*)malloc(sizeof(int) * num);

	if (student == NULL)
	{
		printf("�޸𸮰� �����Ͽ� �Ҵ��� �� �����ϴ�.\n");
		return;
	}

	// �޸� ���
	for (int i = 0; i < num; i++)
	{
		student[i] = i + 1;
	}

	int* reStudent;
	// �տ� student�� �� ��������, �ڿ� ���� ���� �ٿ���
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