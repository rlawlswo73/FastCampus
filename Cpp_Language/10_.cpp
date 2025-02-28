#include<iostream>
#include<string>

using namespace std;

class Student {
private:
	int studentId;
	string name;
public:
	Student(int studentId, string name) : studentId(studentId), name(name) {}
	friend Student operator + (const Student& student, const Student& other) {
		return Student(student.studentId, student.name + " & " + other.name + "|| " + other.studentId);
	}
	friend Student operator + (const Student& student, const int& other) {
		string s = to_string(other);
		return Student(student.studentId, student.name + " & " + s);
	}
	friend Student operator + (const Student& student, const string& other) {
		return Student(student.studentId, student.name + " & " + other);
	}
	void showName() {
		cout << "이름 : " << name << '\n';
	}
};

int main(void) {
	Student student(1, "나동빈");
	Student result1 = student + student; //student + student + student 도 가능.
	Student result2 = student + 1;
	Student result3 = student + "ㅁㄴㅇ";
	// Student result3 = 1 + student; 는 안됨. 
	// 하려면 인자의 순서를 변경한 operator + 오버로딩 함수가 필요함.

	result1.showName();
	result2.showName();
	result3.showName();
	system("pause");
}
