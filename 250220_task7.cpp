#include <stdio.h>

/*
* 1. å�б� ������ ���α׷�
* 2. ���� ���� å�� ������ ���� ���� ����ϴ� ���
* 3. �׳� �׳� ���� ������ ���� ����ڷκ��� �Է� �ޱ� -> ���� ���� ������ ���� ������
* 4. �� ���� ����� ������ �ٽ� �Է¹ް�, ���� �������� ���
* 5. �� ������ ����ڰ� -1�� �Է��� ������ �ݺ�
* 6. �� ����� �Լ��� ����
* 7. �������� ���� ����� �����ϴ� ������ -> ���� ������, static ������ ���� �غ���
* ��) ���� ������ �Է� >> 30
* ���� ���� ������ >> 30
* ���� ������ �Է� >> 20
* ���� ���� ������ >> 50
* ���� ������ �Է� >> -1
* �� �й��ϼ���.
*/

/*
// static ����
void marathon(int page)
{
	static int totalPages = 0;
	totalPages += page;
	
	printf("���� ���� ������ >> %d\n", totalPages);
}

void main()
{
	int page = 0;

	while (true)
	{
		printf("���� �������� �Է��ϼ��� >> ");
		scanf_s("%d", &page);

		if (page == -1)
		{
			break;
		}

		marathon(page);
	}
	printf("�й��ϼ���~\n");
}
*/

// ���� ����
int totalPages = 0;

void marathon(int page)
{
	totalPages += page;
	printf("���� ���� ������ >> %d\n", totalPages);
}

void main()
{
	int page = 0;

	while (true)
	{
		printf("���� �������� �Է��ϼ��� >> ");
		scanf_s("%d", &page);

		if (page == -1)
		{
			break;
		}
		
		marathon(page);
	}
	printf("�й��ϼ���~\n");
}