#include<iostream>
#include<string>

using namespace std;

class Person {
private:
	string name;
public:
	Person() {
		name = "�Ӳ���";
	}
	Person(string name) : name(name) {} // �Լ� �����ε�
	Person operator + (const Person& other) { // ������ �����ε�
		return Person(name + " & " + other.name);
	}
	Person operator + (const int& other) { // ������ �����ε�
		return Person(name + " & " + to_string(other));
	}
	void showName() {
		cout << "�̸�: " << name << '\n';
	}
	~Person() {
		cout << "�����" << endl;
	}
};

int main(void) {
	/*Person person1;
	person1.showName();
	Person person2("������");
	person2.showName();*/

	Person person1;
	Person person2("������");
	Person result = person1 + person2;
	Person result2 = person1 + 1;
	result.showName();
	result2.showName();

	//delete &result;

	system("pause");
}