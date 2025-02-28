#include<stdio.h>
#include<stdlib.h>

int add(int a, int b) {
	printf("1\n");
	return a + b;
}

// 함수 포인터 : 반환할자료형 (*변수이름)(매개변수)
// 아래의 경우 : 반환할자료형(*함수이름(함수의매개변수))(받을매개변수)

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

char* b = "10과 20을 더해보겠습니다.";

int main(void) {
	//printf("%d\n", (*process2)(b)("asd", 10, 20));
	printf("%d\n", process(b)(10, 20));

	/*int (*fp)(char*) = process;
	int (*fp_1)(int, int) = fp("a");

	printf("%d\n", process);
	printf("%d\n", fp_1);*/
	//printf("%d\n", fp_1(10, 20)); // 이 부분만 왜 안되는지 모르겠음

	system("pause");
	return 0;
}