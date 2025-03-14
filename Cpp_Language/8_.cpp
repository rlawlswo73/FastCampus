#include<iostream>
#include<string>

using namespace std;

class Person {
private:
	string name;
public:
	Person(string name) : name(name) {}
	string getName() {
		return name;
	}
	void showName() {
		cout << "이름 : " << getName() << '\n';
	}
};

class Temp {
public:
	void showTemp() {
		cout << "임시 부모 클래스입니다.\n";
	}
};

class Student : Person, public Temp {
private:
	int studentID;
public:
	Student(int studentID, string name) : Person(name) {
		this->studentID = studentID;
	}
	void show() {
		cout << "학생 번호 : " << studentID << '\n';
		cout << "학생 이름 : " << getName() << '\n';
	}
	void showName() {
		cout << "학생 이름 : " << getName() << '\n';
		//cout << "///" << endl;
	}
};

int main(void) {
	Student student(1, "나동빈");
	student.show();
	student.showName();
	student.showTemp();
	system("pause");
}