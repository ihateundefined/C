#include <stdio.h>

/*
* �ϳ��� ������Ʈ���� main �Լ��� �ϳ�������
* �ٸ� ���Ͽ� main �Լ��� �ִٸ�, �� ������ ���忡�� ���ܽ�ų ��
*/ 

void main()
{
	/*
	// �ڷ���(Ÿ��) ������;
	int value;
	value = 100; // �Ҵ�

	int num = 5; // �ʱ�ȭ

	// d 10����, c ���� ����, f ��ȣ �ִ� 10�� �Ǽ�, s ���ڿ�, x 16����
	printf("%x %x\n", value, num);
	*/

	/*
	// char ��
	int value = 100;
	char ch = 'C'; // ���� ����ǥ ��� .. ���� �ϳ��� ����

	printf("���� : %d, ���� : %c", value, ch);
	*/

	/*
	// ������
	int width = 10;
	int height = 20;

	printf("�簢���� ���� : %d\n", width * height);
	*/

	/*
	// �Ǽ��� : �Ҽ����� ������ �� ... �ε��Ҽ���
	double area = 0.0;
	int radius = 5;

	area = radius * radius * 3.14;

	printf("���� ���� : %f \n", area);
	printf("���� ���� : %.2f \n", area);
	*/

	/*
	// ���ڿ�
	char ch1 = 'A'; // ���Ϲ����� ��� '' single
	char ch2 = 'b';
	char ch3 = '1';

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	*/

	
	// scanf
	int input1 = 0;
	int input2 = 0;

	// scanf() // ms������ ���� ������ scanf_s�� ����
	scanf_s("%d%d", &input1, &input2);
	//scanf_s("%d", &input2);

	printf("%d\n", input1 + input2);
	printf("%d", input1);
}
