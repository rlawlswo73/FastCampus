#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* parent = "acabacdabac";
char* pattern = "abacdab";

int* makeTable(char* pattern) {
	int patternSize = strlen(pattern);
	int* table = (int*)malloc(sizeof(int) * patternSize);
	for (int i = 0; i < patternSize; i++) {
		table[i] = 0;
	}
	int j = 0;
	for (int i = 1; i < patternSize; i++) {
		while (j > 0 && pattern[i] != pattern[j]) {
			j = table[j - 1];
		}
		if (pattern[i] == pattern[j]) {
			table[i] = ++j;
		}
	}
	return table;
}

void KMP(char* parent, char* pattern) {
	int* table = makeTable(pattern);
	int parentSize = strlen(parent);
	int patternSize = strlen(pattern);
	for (int i = 0; i < patternSize; i++) {
		printf("%d\n", table[i]);
	}

	int j = 0;
	for (int i = 0; i < parentSize; i++) {
		while (j > 0 && parent[i] != pattern[j]) {
			j = table[j - 1];
		}
		if(parent[i] == pattern[j]) {
			if (j == patternSize - 1) {
				printf("[�ε��� %d]���� ��Ī ���� \n", i - patternSize + 2);
				j = table[j];
			}
			else {
				j++;
			}
		}
	}
}

// a b a |f| a
// a b a |c| d

int main(void) {
	KMP(parent, pattern);
	system("pause");
}