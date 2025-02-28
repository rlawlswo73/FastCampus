#include<iostream>
#include<string>

using namespace std;

int main(void) { // 스마트 포인터 활용.
	unique_ptr<int> p1(new int(10));
	unique_ptr<int> p2;
	cout << "스마트 포인터 1: " << p1 << '\n';
	cout << "스마트 포인터 2: " << p2 << '\n';

	cout << *p1 << '\n';

	cout << "--- 소유권 이전 ---\n";
	p2 = move(p1); // 소유권 이전
	cout << "스마트 포인터 1: " << p1 << '\n';
	cout << "스마트 포인터 2: " << p2 << '\n';
	cout << "--- 소유권 할당 해제 ---\n";
	p2.reset(); // 메모리 할당 해제
	cout << "스마트 포인터 1: " << p1 << '\n';
	cout << "스마트 포인터 2: " << p2 << '\n';

	cout << endl;

	int* arr = new int[10];
	unique_ptr<int> p3(arr);
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	p3.reset();
	cout << '\n';
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	cout << endl;

	int* arr1 = new int[10];
	arr1[7] = 100;
	shared_ptr<int> p4(arr1);
	cout << p4.use_count() << '\n';
	shared_ptr<int> p5(p4);
	cout << p5.use_count() << '\n';
	shared_ptr<int> p6 = p5;
	cout << p6.use_count() << '\n';
	p4.reset();
	p5.reset();
	cout << "arr[7]: " << arr1[7] << '\n';
	p6.reset();
	cout << p4.use_count() << '\n';
	cout << p6.use_count() << '\n';
	cout << "arr[7]: " << arr1[7] << '\n';

	cout << endl;

	int* arr2 = new int(1);
	shared_ptr<int> sp1(arr);
	weak_ptr<int> wp = sp1; // wp는 참조 횟수 계산에서 제외합니다.
	cout << sp1.use_count() << '\n'; // 1로 동일하다.
	cout << wp.use_count() << '\n';
	if (true) {
		shared_ptr<int> sp2 = wp.lock(); // shared_ptr 포인터 반환
		cout << sp1.use_count() << '\n';
		cout << wp.use_count() << '\n';
	} // <- 이 블럭
	//스코프(Scope)를 벗어나므로 sp2가 해제 됩니다.
	cout << sp1.use_count() << '\n';  // 1
	cout << wp.use_count() << '\n'; // 1

	system("pause");
}