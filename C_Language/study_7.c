#include<stdio.h>
#include<stdlib.h>

struct Student {
	char studentId[10];
	char name[10];
	int grede;
	char major[100];
};

//����ü ���ǿ� ���ÿ� ����(����)
//struct Student {
//	// ��Ÿ ����
//} s; <<<����

//����ü ���ǿ� ���ÿ� ����(����) & �ʱ�ȭ
//struct Student {
//	// ��Ÿ ����
//} s = { "20153157", "������", 4, "��ǻ�ͱ�����" }; <<<����

int main(void) {
	/*struct Student s;
	strcpy(s.studentId, "20153157");
	strcpy(s.name, "������");
	s.grede = 4;
	strcpy(s.major, "��ǻ�ͱ�����");*/

	// ��ü ������ ���ÿ� �Ѳ����� ���� ����.
	struct Student s = { "20153157", "������", 4, "��ǻ�ͱ�����" };

	printf("�й� : %s\n", s.studentId);
	printf("�̸� : %s\n", s.name);
	printf("�г� : %d\n", s.grede);
	printf("�а� : %s\n", s.major);

	system("pause");
	return 0;
}