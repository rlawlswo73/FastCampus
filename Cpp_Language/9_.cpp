#include<iostream>
#include<string>

using namespace std;

class Person {
private:
	string name;
public:
	Person() {
		name = "임꺽정";
	}
	Person(string name) : name(name) {} // 함수 오버로딩
	Person operator + (const Person& other) { // 연산자 오버로딩
		return Person(name + " & " + other.name);
	}
	Person operator + (const int& other) { // 연산자 오버로딩
		return Person(name + " & " + to_string(other));
	}
	void showName() {
		cout << "이름: " << name << '\n';
	}
	~Person() {
		cout << "사라짐" << endl;
	}
};

int main(void) {
	/*Person person1;
	person1.showName();
	Person person2("나동빈");
	person2.showName();*/

	Person person1;
	Person person2("나동빈");
	Person result = person1 + person2;
	Person result2 = person1 + 1;
	result.showName();
	result2.showName();

	//delete &result;

	system("pause");
}