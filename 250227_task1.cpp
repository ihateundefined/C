/*
* 1. 구조체 이름이 object -> 물건의 종류, 무게, 높이
* 2. 이름 name, 높이 height, 무게 weight
* 3. 구조체 변수 하나 선언
* 4. 이 변수 통해서 가각의 멤버에 값을 대입
* 5. 문자열은 사용자한테 입력 받지 않아도 괜찮음
* 6. 대입한 멤버의 값을 화면에 출력
* 
* 출력 예)
* 물건의 이름 : 책
* 물건의 높이(cm) : 30
* 물건의 무게(kg) : 2
* 보낼 물건의 정보 : 책, 30cm, 2kg
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
	printf("물건의 이름 입력 >> ");
	scanf_s("%s", post.name, sizeof(post.name));

	printf("물건의 높이 cm 입력 >> ");
	scanf_s("%d", &post.height);

	printf("물건의 무게 kg 입력 >> ");
	scanf_s("%d", &post.weight);

	printf("보낼 물건의 정보 >>> 이름 %s, 높이 %d cm, 무게 %d kg \n", post.name, post.height, post.weight);
}