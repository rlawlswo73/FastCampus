#include<iostream>

using namespace std;

class A {
public:
	virtual void show() = 0 { // =0 은 순수 가상 함수 선언구문.
		// 가상함수는 재정의 하지 않아도 사용할 수 있지만
		// 순수 가상함수는 재정의 하지 않으면 사용할 수 없음.
		cout << "A 클래스" << endl;
	}
};

class B : public A {
public:
	virtual void show() {
		cout << "B 클래스" << endl;
	}
	// B클래스에서 show() 함수를 재정의 하지 않으면 B클래서의 객체를 사용할 수 없습니다.
};

int main(void) {
	A* p;
	//A a; 순수 가상함수로 인해 사용할 수 없다.
	B b;
	//p = &a; p->show();
	p = &b; p->show();
	system("pause");
}