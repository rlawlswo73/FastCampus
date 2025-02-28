#include<iostream>

using namespace std;

class A {
public:
	virtual void show() {
		cout << "A Ŭ�����Դϴ�." << endl;
	}
	virtual ~A() {
		// �Ҹ��ڸ� �����Լ��� ������ ������ �ڽ� Ŭ������ �������� ���ɼ��� ����.
		// (�������� Ÿ���� �θ�Ŭ���� Ÿ������ ���� ���.)
		cout << "A Ŭ���� ����" << endl;
		return;
	}
};

class B : public A {
public:
	virtual void show() { // ���� �Լ�.
		cout << "B Ŭ���� �Դϴ�." << endl;
	}
	virtual void test() {
		cout << " test " << endl;
	}
	virtual ~B() {
		// �Ҹ��ڸ� �����Լ��� ������ ������ �ڽ� Ŭ������ �������� ���ɼ��� ����.
		// (�������� Ÿ���� �θ�Ŭ���� Ÿ������ ���� ���.)
		cout << "B Ŭ���� ����" << endl;
		return;
	}
};

int main(void) {
	A* p;
	A a;
	B b;
	p = &a; p->show();
	p = &b; p->show(); // B Ŭ���� ������ �־����� A Ŭ������ show �Լ��� ����Ѵ�.
	// p->test(); // A Ŭ������ ���� ���� �Լ��� ����� �� ����.

	B* p1;
	p1 = new B();
	p1->test(); // A Ŭ������ ���� ���� �Լ��� ����� �� ����.

	//delete p; p�� �������� �Ҵ�� ���� �ƴ�.
	delete p1;

	system("pause");
} // ���� ���ε� Ȱ��.