#include<stdio.h>
#include<stdlib.h>

struct Student {
	char studentId[10];
	char name[10];
	int grede;
	char major[100];
};

//구조체 정의와 동시에 선언(생성)
//struct Student {
//	// 기타 변수
//} s; <<<여기

//구조체 정의와 동시에 선언(생성) & 초기화
//struct Student {
//	// 기타 변수
//} s = { "20153157", "나동빈", 4, "컴퓨터교육과" }; <<<여기

int main(void) {
	/*struct Student s;
	strcpy(s.studentId, "20153157");
	strcpy(s.name, "나동빈");
	s.grede = 4;
	strcpy(s.major, "컴퓨터교육과");*/

	// 객체 생성과 동시에 한꺼번에 변수 저장.
	struct Student s = { "20153157", "나동빈", 4, "컴퓨터교육과" };

	printf("학번 : %s\n", s.studentId);
	printf("이름 : %s\n", s.name);
	printf("학년 : %d\n", s.grede);
	printf("학과 : %s\n", s.major);

	system("pause");
	return 0;
}