#include<stdio.h>

//typedef struct Student { // �л� ����ü ����
//	char studentId[10];
//	char name[10];
//	int grade;
//	char major[51];
//} Student;

typedef struct { // �л� ����ü ����
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student s = { "20153157","������",4,"��ǻ�ͱ�����" };
	printf("�й� : %s\n", s.studentId);
	printf("�̸� : %s\n", s.name);
	printf("�г� : %d\n", s.grade);
	printf("�а� : %s\n", s.major);

	system("pause");
	return 0;
}