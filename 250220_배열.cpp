#include <stdio.h>
#include <iostream>

void main()
{
	// �迭
	//int array[3];

	//array[0] = 10; // index�� �ٲ��ָ� �ȴ�
	//array[1] = 20;
	//array[2] = 30;

	//int array[3] = { 10, 20, 30 };

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d��° �л��� ������ �Է��ϼ��� >>> ", (i+1));
	//	scanf_s("%d", &array[i]);
	//}

	//printf("%d\n", array[0]);
	//printf("%d\n", array[1]);
	//printf("%d\n", array[2]);
	
	//int total = 0;

	//for (int i = 0; i < 3; i++)
	//{
	//	total += array[i];
	//	printf("%d��° �л��� ���� >>> %d\n", (i+1), array[i]);
	//}
	//printf("********* ���� �Է� �Ϸ� *********\n");

	//double average = total / 3;
	
	//printf("������ >>> %d\n", total);
	//printf("����� >>> %f\n", average);

	/*
	// �迭�� ���̺��� �ʱⰪ�� ���� ���� ���
	int array[5] = { 10, 20 };

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", array[i]);
	}
	*/

	/*
	// �迭�� ���̺��� �ʱⰪ�� ���� ���� ���
	int array[1] = { 10, 20 };

	for (int i = 0; i < 1; i++)
	{
		printf("%d\n", array[i]);
	}
	*/

	/*
	// ���� �Ҵ� .. �̷��� �� ���·� ����
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

	// �������� �� �ֱ�
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = arr1[4-i];
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr2[i]);
	}
}