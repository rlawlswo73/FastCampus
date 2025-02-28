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
		cout << "�̸� : " << name << '\n';
	}
};

int main(void) {
	Student student(1, "������");
	Student result1 = student + student; //student + student + student �� ����.
	Student result2 = student + 1;
	Student result3 = student + "������";
	// Student result3 = 1 + student; �� �ȵ�. 
	// �Ϸ��� ������ ������ ������ operator + �����ε� �Լ��� �ʿ���.

	result1.showName();
	result2.showName();
	result3.showName();
	system("pause");
}
