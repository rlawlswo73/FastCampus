#include<iostream>

using namespace std;

template <typename T>
class Data {
private:
	T data;
public:
	Data(T data) : data(data) { }
	T getData() { return  data; }
	Data<T> operator / (const Data<T>& other) {
		if (other.data == 0) {
			throw 0;
		}
		return Data(data / other.data);
	}
};

int main(void) {
	int a = 7, b = 0;
	try {
		if (b == 0) {
			throw "0으로 나눌 수 없습니다.";
		}
		cout << a / b << 'n';
	}
	catch (const char* str) {
		cout << str << '\n';
	} // <- 기본적인 예외처리

	try {
		Data<int> a(7);
		Data<int> b(0);
		Data<int> result = a / b;
		cout << result.getData() << '\n';
	}
	catch (int e) {
		if (e == 0) {
			cout << "0으로 나눌 수 없습니다.\n";
		}
	} // <- 클래스 예외 처리
	system("pause");
}