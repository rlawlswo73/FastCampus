#include<iostream>
#include<string>

using namespace std;

int main(void) { // ����Ʈ ������ Ȱ��.
	unique_ptr<int> p1(new int(10));
	unique_ptr<int> p2;
	cout << "����Ʈ ������ 1: " << p1 << '\n';
	cout << "����Ʈ ������ 2: " << p2 << '\n';

	cout << *p1 << '\n';

	cout << "--- ������ ���� ---\n";
	p2 = move(p1); // ������ ����
	cout << "����Ʈ ������ 1: " << p1 << '\n';
	cout << "����Ʈ ������ 2: " << p2 << '\n';
	cout << "--- ������ �Ҵ� ���� ---\n";
	p2.reset(); // �޸� �Ҵ� ����
	cout << "����Ʈ ������ 1: " << p1 << '\n';
	cout << "����Ʈ ������ 2: " << p2 << '\n';

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
	weak_ptr<int> wp = sp1; // wp�� ���� Ƚ�� ��꿡�� �����մϴ�.
	cout << sp1.use_count() << '\n'; // 1�� �����ϴ�.
	cout << wp.use_count() << '\n';
	if (true) {
		shared_ptr<int> sp2 = wp.lock(); // shared_ptr ������ ��ȯ
		cout << sp1.use_count() << '\n';
		cout << wp.use_count() << '\n';
	} // <- �� ��
	//������(Scope)�� ����Ƿ� sp2�� ���� �˴ϴ�.
	cout << sp1.use_count() << '\n';  // 1
	cout << wp.use_count() << '\n'; // 1

	system("pause");
}