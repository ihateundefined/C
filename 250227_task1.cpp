/*
* 1. ����ü �̸��� object -> ������ ����, ����, ����
* 2. �̸� name, ���� height, ���� weight
* 3. ����ü ���� �ϳ� ����
* 4. �� ���� ���ؼ� ������ ����� ���� ����
* 5. ���ڿ��� ��������� �Է� ���� �ʾƵ� ������
* 6. ������ ����� ���� ȭ�鿡 ���
* 
* ��� ��)
* ������ �̸� : å
* ������ ����(cm) : 30
* ������ ����(kg) : 2
* ���� ������ ���� : å, 30cm, 2kg
*/

#include <stdio.h>

struct object
{
	char name[10];
	int height;
	int weight;
}post;

void main()
{
	printf("������ �̸� �Է� >> ");
	scanf_s("%s", post.name, sizeof(post.name));

	printf("������ ���� cm �Է� >> ");
	scanf_s("%d", &post.height);

	printf("������ ���� kg �Է� >> ");
	scanf_s("%d", &post.weight);

	printf("���� ������ ���� >>> �̸� %s, ���� %d cm, ���� %d kg \n", post.name, post.height, post.weight);
}