#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "temp.h"
#include "temp.h" // #ifndef ~ #endif 문법으로 중복 선언을 막음.

#define PI 3.1415926535 // 매크로 전처리기(상수)
#define POW(x) (x * x) // 간단한 함수 같이 사용할 수 있음.

// 코드를 줄여서 쓰기 위해 많은 프로그래머가 쓰는 방법.
#define ll long long
#define ld long double

int main(void) {
	int a = 10, b = 20;
	printf("%d\n", add(a, b));

	int r = 10;
	printf("원의 둘레 : %.2f\n", 2 * PI * r);

	int x = 10;
	printf("x의 제곱 : %d\n", POW(x));

	ll c = 98654321000;
	ld d = 100.5054;
	printf("%.1f\n", c * d);

	printf("%d\n", add(3, 7));

	system("pause");
	return 0;
}	