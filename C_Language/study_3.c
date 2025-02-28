#include<stdio.h>
#include<string.h>

int main(void) {
	char* a = "Hello World";
	printf("%s\n", a);

	printf("%d\n", a);

	printf("%p\n", a);

	printf("%d\n", strlen(a));

	char c[100];
	printf("%d\n", sizeof(c));

	system("pause");
	return 0;
}