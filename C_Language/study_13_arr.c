#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define INF 10000

int arr[INF];
int count = 0;

void addBack(int data) {
	arr[count] = data;
	count++;
}

void addFirst(int data) {
	for (int i = count; i >= 1; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = data;
	count++;
}

void removeAt(int index) {
	for (int i = index; i < count; i++) {
		arr[i - 1] = arr[i];
	}
	arr[count] = NULL;
	count--;
}

void show() {
	for (int i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
}

int main(void) {
	addFirst(4);
	addFirst(5);
	addFirst(1);
	addBack(7);
	addBack(6);
	addBack(8);
	show();
	removeAt(3);
	printf("\n");
	show();

	system("pause");
	return 0;
}