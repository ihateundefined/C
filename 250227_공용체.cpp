#include <stdio.h>

union unTemp
{
	char a;
	int b;
	double c;
}un;

void main()
{
	// �� ���� ��� �ּҰ� ���� -> �� ������ �޸� ���� �Ұ� -> �� ������ �޸𸮿� �Ҵ�
	printf("�ּ� : %x, ũ�� : %d\n", &un.a, sizeof(un.a));
	printf("�ּ� : %x, ũ�� : %d\n", &un.b, sizeof(un.b));
	printf("�ּ� : %x, ũ�� : %d\n", &un.c, sizeof(un.c));

	// �� ������ �޸𸮿� �Ҵ� �Ǵ°� Ȯ�� ����
	un.a = 'A';
	printf("������ a : %c\n", un.a);
	un.b = 100;
	printf("������ b : %d\n", un.b);
	un.c = 3.14;
	printf("�Ǽ��� c : %.2f\n", un.c); // �̷��� �ϸ� �� �������� �޸𸮿� ����Ǿ� ����� ����
	printf("������ a : %c\n", un.a); // �̷� ��� ��� �Ұ�
};