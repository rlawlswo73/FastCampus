#include<iostream>

using namespace std;

class A {
public:
	void show() {
		cout << "���1" << endl;
	}
};

class B : public A { // private, protected ���� �����ڷδ� �Լ��� ���� �� ��.

};

int main(void) {
	A a;
	B b;
	b.show();

	system("pause");
}