#include <stdio.h>

void main()
{
	/*
	// �迭�� �̸��� '������ ���'
	int arr[] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < 5; i++)	{
		printf("%d\n", arr[i]);
	}

	for (int i = 0; i < 5; i++)	{
		printf("%x\n", &arr[i]);
	}

	printf("%x\n", arr); // arr[0]�� �ּҰ� .. %x�� ���
	*/

	/*
	// ������ ��� ����
	int arr[] = { 1, 2, 3, 4, 5 };
	int temp = 10;

	// �����ʹ� ����̱� ������ ������ �Ұ� .. ������ ������ �ƴ�
	arr = temp;
	arr = &temp;
	*/

	/*
	// arr �̿��ؼ� �� ����ϱ�
	int arr[] = { 1, 2, 3, 4, 5 };
	printf("%x\n", arr);
	
	for (int i = 0; i < 5; i++)	{
		printf("%x\n", (arr+i)); // �ּҰ� ���
		printf("%x\n", *(arr+i)); // �� ���
	}
	*/

	/*
	// �����͵� �迭�� ��� ����
	int arr[] = { 1, 2, 3, 4, 5 };
	int* pArr; // �ּҰ��� ������ �� ����
	pArr = arr; // arr�� �ּҰ��� ������ �ְ�, pArr�� �ּҰ��� �޴� �����ϱ� ����!
	// ���� = ���

	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]); // �� ���
		printf("%d\n", pArr[i]); // ������ �迭�� �� ���
	}
	for (int i = 0; i < 5; i++) {
		printf("%x\n", *(pArr + i)); // �� ���
	}
	*/

	/*
	// ���ڿ� ����� ������
	// "CProgramming" -> ���ڿ� ���
	// ������ �� �ִ� ���ڿ� -> ���ڿ� ����
	// ������ �� ���� ���ڿ� -> ���ڿ� ���
	// ���ڿ� Ÿ�� string

	char str[] = "love"; // ���ڿ� ����
	// char* pStr; // pStr�� �ּҰ��� �����ϴ� ������ ���ڿ� ���
	const char* pStr1 = "you"; // ���ڿ� ��� ��, you�� ����ִ� �޸��� �ּҰ��� ������ ����

	printf("%s\n", str);
	// printf("%s\n", pStr);
	printf("%s\n", pStr1);

	str[0] = 'r';
	// pStr1[0] = 'T';
	printf("%s\n", str);
	*/
}