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

	// a�� ���� �Ҵ�� �ּҸ� �ְ�
	// *a�� �Ǵٽ� ���� �Ҵ�� �ּҸ� �ִ´�.
	// �Ŀ� �̰��� a -> *a �� ���ļ� �����͸� ��������

	//int *b = *a;
	//*b = 4;
	//printf("%d\n", b);
	//printf("%d\n", *b);	

	free(*a);
	free(a);

	system("pause");
	return 0;
}