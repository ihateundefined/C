#include <stdio.h>

void main()
{
	/*
	// �������� �⺻ ����
	char str[] = "Programming";
	char* pStr;

	pStr = &str[0];
	// P�� �ּҰ��� pStr�� �Ѱ���

	char* pStr1;
	pStr1 = &str[1];

	printf("%x\n", pStr); // P�� �ּҰ� ���
	printf("%c\n", *pStr); // P ���
	printf("%x\n", pStr1); // P�� �ּҰ� ���
	printf("%x\n", pStr + 1); // str[1]�� �ּҰ�
	printf("%c\n", *(pStr + 1)); // r�� ��µ�
	printf("%x\n", pStr + 3); // str[3]�� �ּҰ�
	printf("%c\n", *(pStr + 3)); // g�� ��µ�

	// ���� �ϳ��� 1����Ʈ
	// pStr + 1 �� ���� ��� => ������ 4����Ʈ, char�̴ϱ� 1����Ʈ �� �̵�
	*/

	// �ּҰ��� ��ü�� ? ���� -> ������ 4����Ʈ
	char a = 'A';
	char* pA = &a;
	int b = 100;
	int* pB = &b;
	double c = 3.14;
	double* pC = &c;

	// sizeof() => �ش� ������ size�� �����ϴ� ������
	printf("pA�� ũ�� >> %d byte \n", sizeof(pA)); // �ּҰ� => 32bit 4����Ʈ/ 64bit 8����Ʈ
	printf("pB�� ũ�� >> %d byte \n", sizeof(pB));
	printf("pC�� ũ�� >> %d byte \n", sizeof(pC));

	// ������ ������ ����Ű�� �ִ� ���� �޸��� ũ��
	printf("*pA�� ũ�� : %d byte \n", sizeof(*pA)); // 1
	printf("*pB�� ũ�� : %d byte \n", sizeof(*pB)); // 4
	printf("*pC�� ũ�� : %d byte \n", sizeof(*pC)); // 8
}