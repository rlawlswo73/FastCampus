#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int** a = malloc(sizeof(int*));
	printf("%d\n", a);
	printf("%d\n", *a);
	*a = malloc(sizeof(int));
	**a = 4;
	printf("%d\n", *a);
	printf("%d\n", **a);

	// a에 새로 할당된 주소를 넣고
	// *a에 또다시 새로 할당된 주소를 넣는다.
	// 후에 이것을 a -> *a 를 거쳐서 데이터를 넣을려면

	//int *b = *a;
	//*b = 4;
	//printf("%d\n", b);
	//printf("%d\n", *b);	

	free(*a);
	free(a);

	system("pause");
	return 0;
}