#include <stdio.h>

// �迭�� �����ϰ� �޴°� ����
// �迭�� �̸��� �����ʹϱ� �迭�� ���� �ּҰ��� �Ѱ��ִ� �� ����
/*
void func(int a, int b, int c, int d, int e)
{
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
}
*/

// �ּҰ��� �����ؼ� �����ϴ� �� call by reference
int func(int* pArr, int parameterSize)
{
	printf("func �Լ����� ��� >>> \n");
	printf("%x\n", *pArr);
	printf("%x\n", pArr);
	
	/*
	for (int i = 0; i < 5; i++)
	{
		printf("%x\n", *(pArr+i));
	}
	*/

	/*
	printf("�迭�� ����� ���� �� ���ϱ�****\n");
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += *(pArr + i);
	}
	printf("�������� >>> %d\n", sum);
	*/
	
	int sum = 0;

	for (int i = 0; i < parameterSize; i++)
	{
		sum += *(pArr + i);
	}

	return sum;
}

void main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	//func(arr[0], arr[1], arr[2], arr[3], arr[4]);

	printf("%x\n", &arr);
	/*
	for (int i = 0; i < 5; i++)
	{
		printf("%x\n", &arr+ i);
	}
	*/

	int size = sizeof(arr) / sizeof(int); // �迭�� ��ü �޸� / ���� �޸� 4
	// call by value

	int hap = func(arr , size);
	printf("func�Լ����� ���� ����� >>> %d\n", hap);

	printf("main �Լ����� ��� >>> \n");
	/*
	for (int i = 0; i < 5; i++)
	{
		printf("%x\n", arr[i]);
	}
	*/

}