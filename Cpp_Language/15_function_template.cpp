#include<iostream>
#include<string>

using namespace std;

template <typename T> // �Լ� ���ø� ���.
void change(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> //����� Ư��ȭ ���.
void change<int>(int& a, int& b) { 
	cout << "������ �����͸� ��ü�մϴ�.\n";
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	string a = "������";
	string b = "ȫ�浵";

	int x = 7;
	int y = 3;

	change(x, y);
	change(a, b);

	cout << x << ":" << y << endl;
	cout << a << ":" << b << endl;
	system("pause");
}; // ���ø� Ȱ��.