#include <stdio.h>
#include <string.h>

/*
// 사용자 정의 타입 -> 구조체
// 추상적
struct student
{
	char name[10]; // 구조체 멤버
	int age;
	int height;
};

void main()
{
	student st1; // 구조체 변수 st1
	student st2;
}
*/

/*
// 다음과 같이도 구조체 변수 선언 가능
struct student
{
	char name[10]; // 구조체 멤버
	int age;
	double height;
}st1, st2, *pSt;

void main()
{
	student* pA; // 포인터는 주소값만 저장하는 변수로 4 type
	
	strcpy_s(st1.name, "lch"); // string copy?
	st1.age = 25;
	st1.height = 123.4;

	printf("이름 >> %s, 나이 >> %d, 키 >> %.1f\n", st1.name, st1.age, st1.height);
}
*/

/*
// 구조체와 포인터
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

	printf("이름 >> %s, 나이 >> %d, 키 >> %.1f\n", pSt->name, pSt->age, pSt->height);
}
*/

/*
// 구조체 초기화
struct student
{
	char name[10];
	int age;
	double height;
}st1 = { "st1", 11, 111.1 }; // 또 다른 구조체 초기화 방법

void main()
{
	int b = 0; // 변수 초기화
	student a = {"sunhee", 12, 123.4}; // 구조체 초기화 ... 타입에 맞게 초기화 해줘야 함

	printf("이름 >> %s, 나이 >> %d, 키 >> %.1f\n", st1.name, st1.age, st1.height);
	printf("이름 >> %s, 나이 >> %d, 키 >> %.1f\n", a.name, a.age, a.height);
}
*/

/*
// 구조체 다중 선언
struct student
{
	char name[10];
	int age;
	double height;
}st1[10]; // 10명 선언

void main()
{
	student a[100]; // 100명 선언
}
*/

/*
// 구조체 다중 선언 및 초기화
struct student
{
	char name[10];
	int age;
	double height;
}st1[3] = { // 3명 선언 및 초기화
	{"로라", 11, 111.1},
	{"리리", 22, 222.2},
	{"디디", 33, 333.3}
};

void main()
{
	for (int i = 0; i < 3; i++)
	{
		printf("이름 : %s, 나이 : %d, 키 : %.2f\n", st1[i].name, st1[i].age, st1[i].height);
	}
}
*/

/*
// 구조체 배열의 크기 구하기
struct student
{
	char name[10];
	int age;
	double height;
}st1[3] = {
	{"로라", 11, 111.1},
	{"리리", 22, 222.2},
	{"디디", 33, 333.3}
};

void main()
{
	for (int i = 0; i < sizeof(st1)/sizeof(st1[0]); i++)
	{
		printf("이름 : %s, 나이 : %d, 키 : %.2f\n", st1[i].name, st1[i].age, st1[i].height);
	}
}
*/

/*
// 포인터 이용해서 값 접근하기
struct student
{
	char name[10];
	int age;
	double height;
}st1[3] = {
	{"로라", 11, 111.1},
	{"리리", 22, 222.2},
	{"디디", 33, 333.3}
}, *pSt;

void main()
{
	pSt = st1;

	for (int i = 0; i < sizeof(st1) / sizeof(st1[0]); i++)
	{
		printf("이름 : %s, 나이 : %d, 키 : %.2f\n", st1[i].name, st1[i].age, st1[i].height);
		printf("이름 : %s, 나이 : %d, 키 : %.2f\n", (pSt + i)->name, (pSt + i)->age, (pSt + i)->height);
	}
}
*/