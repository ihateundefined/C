#include <stdio.h>

void main()
{
	/*
	* 1. ���� ������ ���� ���� �� �� �Է� �޴´�.
	* 2. ��, �Է��ϴ� ���� ������ 0���� 100 ����
	* 3. 100 ~ 91���� A����, 90 ~ 81���� B����, 80 ~ 71���� C����, 70~ 61���� D����, 60�� ���ϴ� F ����
	* ��� ��) ������ �Է��Ͻÿ� : 95 / ������ A �Դϴ�.
	* switch ~ case ���� ����Ͽ� �����϶�.
	*/

	int score = 0;
	char grade = 'A';

	printf("����(����, 0~100 ����)�� �Է��Ͻÿ� : ");
	scanf_s("%d", &score);

	if (score < 0 || score > 100) {
		printf("���� ������ �ٽ� Ȯ�����ּ���!\n");
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
	printf("������ %c �Դϴ�.\n", grade);
}