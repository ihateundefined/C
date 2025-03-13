#include <stdio.h>
#include <string.h>

/*
// ����� ���� Ÿ�� -> ����ü
// �߻���
struct student
{
	char name[10]; // ����ü ���
	int age;
	int height;
};

void main()
{
	student st1; // ����ü ���� st1
	student st2;
}
*/

/*
// ������ ���̵� ����ü ���� ���� ����
struct student
{
	char name[10]; // ����ü ���
	int age;
	double height;
}st1, st2, *pSt;

void main()
{
	student* pA; // �����ʹ� �ּҰ��� �����ϴ� ������ 4 type
	
	strcpy_s(st1.name, "lch"); // string copy?
	st1.age = 25;
	st1.height = 123.4;

	printf("�̸� >> %s, ���� >> %d, Ű >> %.1f\n", st1.name, st1.age, st1.height);
}
*/

/*
// ����ü�� ������
struct student
{
	char name[10];
	int age;
	double height;
}st1, st2, * pSt;

void main()
{
	pSt = &st1;

	strcpy_s(pSt->name, "sunhee");
	pSt-> age = 20;
	pSt-> height = 123.4;

	printf("�̸� >> %s, ���� >> %d, Ű >> %.1f\n", pSt->name, pSt->age, pSt->height);
}
*/

/*
// ����ü �ʱ�ȭ
struct student
{
	char name[10];
	int age;
	double height;
}st1 = { "st1", 11, 111.1 }; // �� �ٸ� ����ü �ʱ�ȭ ���

void main()
{
	int b = 0; // ���� �ʱ�ȭ
	student a = {"sunhee", 12, 123.4}; // ����ü �ʱ�ȭ ... Ÿ�Կ� �°� �ʱ�ȭ ����� ��

	printf("�̸� >> %s, ���� >> %d, Ű >> %.1f\n", st1.name, st1.age, st1.height);
	printf("�̸� >> %s, ���� >> %d, Ű >> %.1f\n", a.name, a.age, a.height);
}
*/

/*
// ����ü ���� ����
struct student
{
	char name[10];
	int age;
	double height;
}st1[10]; // 10�� ����

void main()
{
	student a[100]; // 100�� ����
}
*/

/*
// ����ü ���� ���� �� �ʱ�ȭ
struct student
{
	char name[10];
	int age;
	double height;
}st1[3] = { // 3�� ���� �� �ʱ�ȭ
	{"�ζ�", 11, 111.1},
	{"����", 22, 222.2},
	{"���", 33, 333.3}
};

void main()
{
	for (int i = 0; i < 3; i++)
	{
		printf("�̸� : %s, ���� : %d, Ű : %.2f\n", st1[i].name, st1[i].age, st1[i].height);
	}
}
*/

/*
// ����ü �迭�� ũ�� ���ϱ�
struct student
{
	char name[10];
	int age;
	double height;
}st1[3] = {
	{"�ζ�", 11, 111.1},
	{"����", 22, 222.2},
	{"���", 33, 333.3}
};

void main()
{
	for (int i = 0; i < sizeof(st1)/sizeof(st1[0]); i++)
	{
		printf("�̸� : %s, ���� : %d, Ű : %.2f\n", st1[i].name, st1[i].age, st1[i].height);
	}
}
*/

/*
// ������ �̿��ؼ� �� �����ϱ�
struct student
{
	char name[10];
	int age;
	double height;
}st1[3] = {
	{"�ζ�", 11, 111.1},
	{"����", 22, 222.2},
	{"���", 33, 333.3}
}, *pSt;

void main()
{
	pSt = st1;

	for (int i = 0; i < sizeof(st1) / sizeof(st1[0]); i++)
	{
		printf("�̸� : %s, ���� : %d, Ű : %.2f\n", st1[i].name, st1[i].age, st1[i].height);
		printf("�̸� : %s, ���� : %d, Ű : %.2f\n", (pSt + i)->name, (pSt + i)->age, (pSt + i)->height);
	}
}
*/