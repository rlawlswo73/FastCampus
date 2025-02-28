#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void) {  // STL �����̳� ����� ���.
	stack<int> s;  // stack �ڷᱸ��
	s.push(7);
	s.push(5);
	s.push(4);
	s.pop();
	s.push(6);
	s.pop();
	while (!s.empty()) {
		cout << s.top() << ' ';
		s.pop();
	}

	cout << endl;

	queue<int> q;  // Queue �ڷᱸ�� ���.
	q.push(7);
	q.push(5);
	q.push(4);
	q.pop();
	q.push(6);
	q.pop();
	while (!q.empty()) {
		cout << q.front() << ' ';
		q.pop();
	}

	cout << endl;

	int x, n;
	cin >> n;
	priority_queue<int> pq;
	for (int i = 0; i < n; i++) {
		cin >> x;
		pq.push(x);
	}
	while (!pq.empty()) {
		cout << pq.top() << ' ';
		pq.pop();
	}

	system("pause");
}

