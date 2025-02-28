#include<iostream>
#include<string>

using namespace std;

template <typename T> // 함수 템플릿 사용.
void change(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> //명시적 특수화 사용.
void change<int>(int& a, int& b) { 
	cout << "정수형 데이터를 교체합니다.\n";
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	string a = "나동빈";
	string b = "홍길도";

	int x = 7;
	int y = 3;

	change(x, y);
	change(a, b);

	cout << x << ":" << y << endl;
	cout << a << ":" << b << endl;
	system("pause");
}; // 템플릿 활용.