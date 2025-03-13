#include <stdio.h>

/*
* 1. 커피자판기가 있음
* 2. 100원 블랙커피, 200원 밀크커피
* 3. 자판기를 함수로 구현하기.
* 4. 사용자로부터 정수형 가격 입력받아 -> 100, 200 둘 중 하나
* 5. 각 가격에 맞는 결과 출력
*/

void coffee(int price)
{
	if (price == 100)
	{
		printf("주문하신 블랙커피 입니다.\n");
	}
	else if (price == 200)
	{
		printf("주문하신 밀크커피 입니다.\n");
	}
	else {
		printf("100원이나 200원 중 금액에 맞게 넣어주세요!\n");
	}
}

void main()
{
	int price = 0;

	printf("커피 주문을 위해 100원 또는 200원을 숫자만 입력해주세요 >>> ");
	scanf_s("%d", &price);
	coffee(price);
}