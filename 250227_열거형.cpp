#include <stdio.h>

// �ڵ����� ������ �ν��� �ȴ�
// �ʱⰪ �������� ������ �ڵ����� 0���� ����
enum Week
{
	sun = 1,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
};

void main()
{
	int day = 0;
	printf("���� �Է� >>> ");
	scanf_s("%d", &day);

	switch (day)
	{
	case sun:
		printf("�Ͽ���\n");
		break;
	case mon:
		printf("������\n");
		break;
	case tue:
		printf("ȭ����\n");
		break;
	case wed:
		printf("������\n");
		break;
	case thu:
		printf("�����\n");
		break;
	case fri:
		printf("�ݿ���\n");
		break;
	case sat:
		printf("�����\n");
		break;
	default:
		printf("default\n");
		break;
	}
}