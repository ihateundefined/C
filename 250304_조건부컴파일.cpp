#include <stdio.h>

/*
// ��ũ�� ����
// ���� 1�̶�� ���ڸ� A�� ġȯ�ϰڴ�
#define A 1
// DEBUG�� 1�� ��ü�ϰڴ�
#define DEBUG 0

void main()
{
	// 20% �ٸ� �ڵ�
#if DEBUG // 1�̴ϱ� true
	printf("����� ���� �����մϴ�.\n");
#else
	printf("������ ���� �����մϴ�.\n");
#endif
	// 80% ���� �ڵ�
}
*/

// �⺻ ���� ��ũ�� �Լ�
void main()
{
	printf("���� ��¥�� %s �Դϴ�\n", __DATE__);
	printf("���� �ð��� %s �Դϴ�\n", __TIME__);
	printf("�ҽ� ������ %s �Դϴ�\n", __FILE__);
	printf("���� ������ %d �Դϴ�\n", __LINE__);
}