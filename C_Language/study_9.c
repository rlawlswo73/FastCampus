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
	strcpy(s->name, "나동빈");
	s->grade = 4;
	strcpy(s->major, "컴퓨터교육과");

	printf("학번 : %s\n", s->sId);
	printf("이름 : %s\n", s->name);
	printf("학년 : %d\n", s->grade);
	printf("학과 : %s\n", s->major);

	system("pause");
	return 0;
}