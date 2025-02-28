#include<iostream>

using namespace std;

class A {
public:
	void show() {
		cout << "출력1" << endl;
	}
};

class B : public A { // private, protected 접근 제한자로는 함수에 접근 못 함.

};

int main(void) {
	A a;
	B b;
	b.show();

	system("pause");
}