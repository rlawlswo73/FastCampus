#include<iostream>

using namespace std;

class A {
public:
	virtual void show() = 0 { // =0 �� ���� ���� �Լ� ���𱸹�.
		// �����Լ��� ������ ���� �ʾƵ� ����� �� ������
		// ���� �����Լ��� ������ ���� ������ ����� �� ����.
		cout << "A Ŭ����" << endl;
	}
};

class B : public A {
public:
	virtual void show() {
		cout << "B Ŭ����" << endl;
	}
	// BŬ�������� show() �Լ��� ������ ���� ������ BŬ������ ��ü�� ����� �� �����ϴ�.
};

int main(void) {
	A* p;
	//A a; ���� �����Լ��� ���� ����� �� ����.
	B b;
	//p = &a; p->show();
	p = &b; p->show();
	system("pause");
}