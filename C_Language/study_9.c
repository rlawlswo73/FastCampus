#include<stdio.h>

typedef struct {
	char sId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student* s = malloc(sizeof(Student));
	strcpy(s->sId, "20153157");
	strcpy(s->name, "������");
	s->grade = 4;
	strcpy(s->major, "��ǻ�ͱ�����");

	printf("�й� : %s\n", s->sId);
	printf("�̸� : %s\n", s->name);
	printf("�г� : %d\n", s->grade);
	printf("�а� : %s\n", s->major);

	system("pause");
	return 0;
}