#include <stdio.h>

/*
// 매크로 예시
// 나는 1이라는 숫자를 A로 치환하겠다
#define A 1
// DEBUG를 1로 대체하겠다
#define DEBUG 0

void main()
{
	// 20% 다른 코드
#if DEBUG // 1이니까 true
	printf("디버그 모드로 동작합니다.\n");
#else
	printf("릴리즈 모드로 동작합니다.\n");
#endif
	// 80% 공통 코드
}
*/

// 기본 내장 메크로 함수
void main()
{
	printf("현재 날짜는 %s 입니다\n", __DATE__);
	printf("현재 시간은 %s 입니다\n", __TIME__);
	printf("소스 파일은 %s 입니다\n", __FILE__);
	printf("현재 라인은 %d 입니다\n", __LINE__);
}