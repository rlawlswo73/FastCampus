#include<iostream>

using namespace std;

class A {
public:
	virtual void show() {
		cout << "A 클래스입니다." << endl;
	}
	virtual ~A() {
		// 소멸자를 가상함수로 만들지 않으면 자식 클래스가 남아있을 가능성이 있음.
		// (포인터의 타입을 부모클래스 타입으로 했을 경우.)
		cout << "A 클래스 해제" << endl;
		return;
	}
};

class B : public A {
public:
	virtual void show() { // 가상 함수.
		cout << "B 클래스 입니다." << endl;
	}
	virtual void test() {
		cout << " test " << endl;
	}
	virtual ~B() {
		// 소멸자를 가상함수로 만들지 않으면 자식 클래스가 남아있을 가능성이 있음.
		// (포인터의 타입을 부모클래스 타입으로 했을 경우.)
		cout << "B 클래스 해제" << endl;
		return;
	}
};

int main(void) {
	A* p;
	A a;
	B b;
	p = &a; p->show();
	p = &b; p->show(); // B 클래스 변수를 넣었지만 A 클래스의 show 함수를 사용한다.
	// p->test(); // A 클래스에 있지 않은 함수는 사용할 수 없다.

	B* p1;
	p1 = new B();
	p1->test(); // A 클래스에 있지 않은 함수는 사용할 수 없다.

	//delete p; p는 동적으로 할당된 것이 아님.
	delete p1;

	system("pause");
} // 동적 바인딩 활용.