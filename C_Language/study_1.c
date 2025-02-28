#include<stdio.h>
int main(void) {
	int a = 5;
	int a_a = 0;

	int* b = &a;
	int** c = &b;
	printf("%d\n", **c);

	printf("%d\n", b);
	printf("%d\n", *b);

	printf("%d\n", c);
	printf("%d\n", **c);

	b = &a_a;

	printf("%d\n", b);
	printf("%d\n", *b);

	printf("%d\n", c);
	printf("%d\n", **c);

	system("pause");
}