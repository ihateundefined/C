#include <stdio.h>

// 자동으로 정수로 인식이 된다
// 초기값 설정하지 않으면 자동으로 0으로 세팅
enum Week
{
	sun = 1,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
};

void main()
{
	int day = 0;
	printf("요일 입력 >>> ");
	scanf_s("%d", &day);

	switch (day)
	{
	case sun:
		printf("일요일\n");
		break;
	case mon:
		printf("월요일\n");
		break;
	case tue:
		printf("화요일\n");
		break;
	case wed:
		printf("수요일\n");
		break;
	case thu:
		printf("목요일\n");
		break;
	case fri:
		printf("금요일\n");
		break;
	case sat:
		printf("토요일\n");
		break;
	default:
		printf("default\n");
		break;
	}
}