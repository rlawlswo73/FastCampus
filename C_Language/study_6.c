#include<stdio.h>
#include<stdlib.h>

int add(int a, int b) {
	printf("1\n");
	return a + b;
}

// �Լ� ������ : ��ȯ���ڷ��� (*�����̸�)(�Ű�����)
// �Ʒ��� ��� : ��ȯ���ڷ���(*�Լ��̸�(�Լ��ǸŰ�����))(�����Ű�����)

int (*process(char* a))(int, int) {
	printf("2\n");
	printf("%s\n", a);
	return add;
}

int (*process2(char* a))(char*, int, int) {
	printf("3\n");
	printf("%s\n", a);
	return process;
}

char* b = "10�� 20�� ���غ��ڽ��ϴ�.";

int main(void) {
	//printf("%d\n", (*process2)(b)("asd", 10, 20));
	printf("%d\n", process(b)(10, 20));

	/*int (*fp)(char*) = process;
	int (*fp_1)(int, int) = fp("a");

	printf("%d\n", process);
	printf("%d\n", fp_1);*/
	//printf("%d\n", fp_1(10, 20)); // �� �κи� �� �ȵǴ��� �𸣰���

	system("pause");
	return 0;
}