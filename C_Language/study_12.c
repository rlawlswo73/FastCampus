#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "temp.h"
#include "temp.h" // #ifndef ~ #endif �������� �ߺ� ������ ����.

#define PI 3.1415926535 // ��ũ�� ��ó����(���)
#define POW(x) (x * x) // ������ �Լ� ���� ����� �� ����.

// �ڵ带 �ٿ��� ���� ���� ���� ���α׷��Ӱ� ���� ���.
#define ll long long
#define ld long double

int main(void) {
	int a = 10, b = 20;
	printf("%d\n", add(a, b));

	int r = 10;
	printf("���� �ѷ� : %.2f\n", 2 * PI * r);

	int x = 10;
	printf("x�� ���� : %d\n", POW(x));

	ll c = 98654321000;
	ld d = 100.5054;
	printf("%.1f\n", c * d);

	printf("%d\n", add(3, 7));

	system("pause");
	return 0;
}	