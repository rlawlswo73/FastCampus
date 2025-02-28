#include<stdio.h>

int main(void) {
	for (int i = 0; i < 9; i++) {
		int a = (i - 1) / 2;
		printf("%d %d\n", i, a);
	}

	for (int i = 0; i < 9; i++) {
		int a = (-i - 1) / 2;
		printf("%d %d\n", i, a);
	}

}