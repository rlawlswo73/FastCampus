#include<iostream>

//using namespace std;

namespace A {
	void cout() {
		std::cout << "���2" << std::endl;
	}
}

using namespace A;

int main(void) {
	std::cout << "���1" << std::endl;
	A::cout();
	cout();
	
	system("pause");
	return 0;
}