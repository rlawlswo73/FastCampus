#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	char s[20] = "Hello World";
	FILE* fp;
	// fopen(파일경로, 접근방식);
	fp = fopen("temp.txt", "w");
	fprintf(fp, "%s\n", s);

	fclose(fp);

	//system("pause");
	return 0;
}