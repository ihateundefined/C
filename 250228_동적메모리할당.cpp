#include <stdio.h>
#include <corecrt_malloc.h> // malloc library

void main()
{
	/*
	// ���� �޸� �Ҵ��� �ʿ��� ����
	int num = 0;

	printf("�л����� �Է��ϼ��� >>> ");
	scanf_s("%d", &num);

	int student[num];
	*/

	/*
	// ���� �޸� �Ҵ� ����
	int* student;
	int num = 0;
	printf("�л��� �Է� >>> ");
	scanf_s("%d", &num);

	// stack �޸� 4 ����Ʈ -> ����Ű�� �ִ� heap �޸� 400����Ʈ
	student = (int*)malloc(sizeof(int) * num); // 4 ����Ʈ * �л��� -> malloc�� �Ҵ�
	// �̷��� ������ ������ ������ �ؾ��ϴ� ��? null ���� üũ

	if (student == NULL) // "null"�� "NULL"�� ����
	{
		printf("�޸𸮰� �����Ͽ� �Ҵ��� �� �����ϴ�\n");
		return;
	}
	printf("�޸� �Ҵ��� �� �̷�� ��! �Ҵ�� �޸� ũ��� %d�Դϴ�\n", sizeof(int) * num);

	// ������ -> �޸� ���� ���� ���� free ���ش�
	free(student);
	*/

	/*
	// ���� �޸� �����ϰ�, �� �Ҵ��غ���
	int* student;
	int num = 0;
	printf("�л��� �Է� >>> ");
	scanf_s("%d", &num);

	student = (int*)malloc(sizeof(int) * num);

	if (student == NULL)
	{
		printf("�޸𸮰� �����Ͽ� �Ҵ��� �� �����ϴ�\n");
		return;
	}

	// �޸� ���
	//printf("1��° �л� ���� �Է� >>> ");
	//scanf_s("%d", &student[0]);

	// �ݺ������� �ڵ� ����
	for (int i = 0; i < num; i++)
	{
		printf("%d��° �л� ���� �Է� >>> ", i+1);
		scanf_s("%d", &student[i]);
	}

	// ���� �� ��� ���ϱ�
	int total = 0;

	for (int i = 0; i < num; i++)
	{
		printf("%d��° �л� ���� -> %d\n", i+1, student[i]);
		total += student[i];
	}

	printf("�л����� �� ���� >> %d, ����� >>> %.2f\n", total, (double)total / num);

	free(student);
	*/
}