#include<iostream>
#include<string>

using namespace std;

template <typename T = int>  // 디폴트 템플릿 인수 ( = int )
class Data {  // 클래스 템플릿.
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
	Data<> data1(1); // 디폴트 템플릿을 설정했기 때문에  Data<int> data1(1); 와 같다. 
	Data<string> data2("나동빈");
	cout << data1.getData() << ":" << data2.getData() << "\n";
	system("pause");
} // 클래스 템플릿 및 디폴트 템플릿 인수 사용.