#include<iostream>
#include<string>

using namespace std;

//class Person {
//private:
//	string name;
//public:
//	static int count;
//	Person(string name) : name(name) {
//		count++;
//	}
//};
//
//int Person::count = 0; ����ƽ(����) ���� ���.

class Person {
private:
	const int id;
	string name;
public:
	static int count;
	Person(int id, string name) : id(id), name(name) {
		count++;
	}
	//void setId(int id) {
	//	this->id = id; // ���� �߻� [ ���� �Ұ��� ]
	//}
}; // ���(const) ���� ���.

int Person::count = 0;

int main(void) {
	Person p1(1, "������");
	Person p2(2, "ȫ�浿");
	Person p3(3, "�̼���");
	cout << "����� �� : " << Person::count << '\n';
	system("pause");
} // ����, ��� ���� ��� ����.