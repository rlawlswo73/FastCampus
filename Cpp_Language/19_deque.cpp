#include<iostream>
#include<deque>

using namespace std;

int main(void) {
	deque<int> d;
	d.push_front(3);
	d.push_back(7);
	d.pop_front();
	d.push_front(4);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' ';
	}
	cout << endl;

	deque<int>::iterator iter; // <- 이터레이터를 선언함으로서 각 요소에 접근할 수 있음.
	iter = d.begin(); // <- 어느 원소에 접근할 것인지 지정.
	d.insert(iter + 1, 3, 5);
	iter = d.begin();
	d.insert(iter + 1, 1, 9);
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' '; // <- 요소 접근.
	}
	cout << '\n';
	d.clear(); // deque 안을 비움.
	cout << d.empty() << '\n';
	system("pause");
} // C++ STL 시퀀스 컨테이너 deque 활용.