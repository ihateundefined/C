#include <stdio.h>
#include <iostream>

void main()
{
	// 배열
	//int array[3];

	//array[0] = 10; // index만 바꿔주면 된다
	//array[1] = 20;
	//array[2] = 30;

	//int array[3] = { 10, 20, 30 };

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d번째 학생의 성적을 입력하세요 >>> ", (i+1));
	//	scanf_s("%d", &array[i]);
	//}

	//printf("%d\n", array[0]);
	//printf("%d\n", array[1]);
	//printf("%d\n", array[2]);
	
	//int total = 0;

	//for (int i = 0; i < 3; i++)
	//{
	//	total += array[i];
	//	printf("%d번째 학생의 점수 >>> %d\n", (i+1), array[i]);
	//}
	//printf("********* 점수 입력 완료 *********\n");

	//double average = total / 3;
	
	//printf("총점은 >>> %d\n", total);
	//printf("평균은 >>> %f\n", average);

	/*
	// 배열의 길이보다 초기값의 수가 적은 경우
	int array[5] = { 10, 20 };

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", array[i]);
	}
	*/

	/*
	// 배열의 길이보다 초기값의 수가 많은 경우
	int array[1] = { 10, 20 };

	for (int i = 0; i < 1; i++)
	{
		printf("%d\n", array[i]);
	}
	*/

	/*
	// 동적 할당 .. 이렇게 빈 상태로 선언
	int array[] = { 10, 20 };

	for (int i = 0; i < 2; i++)
	{
		printf("%d\n", array[i]);
	}
	*/

	int arr1[5] = { 10, 20, 30, 40, 50 };
	int arr2[5];

	/*
	for (int i =0; i<5; i++)
	{
		arr2[i] = arr1[i];
	}
	*/

	// 역순으로 값 넣기
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = arr1[4-i];
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr2[i]);
	}
}