#include<iostream>
#include<string>

using namespace std;

template <typename T = int>  // ����Ʈ ���ø� �μ� ( = int )
class Data {  // Ŭ���� ���ø�.
private:
	T data;
public:
	Data(T data) : data(data) {}
	void setData(T data) {
		this->data = data;
	}
	T getData() {
		return data;
	}
};

int main(void) {
	Data<> data1(1); // ����Ʈ ���ø��� �����߱� ������  Data<int> data1(1); �� ����. 
	Data<string> data2("������");
	cout << data1.getData() << ":" << data2.getData() << "\n";
	system("pause");
} // Ŭ���� ���ø� �� ����Ʈ ���ø� �μ� ���.