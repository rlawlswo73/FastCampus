#include<iostream>
#include<set>

using namespace std;

int main(void) {
	int array[5] = { 2, 4, 6, 8, 10 };
	set<int> s(array, array + 5);
	set<int>::iterator iter = s.begin();
	for (; iter != s.end(); iter++) {
		cout << *iter << ' ';
	}
	cout << '\n';
	s.insert(1);
	s.insert(3);
	s.insert(5);
	iter = s.begin();
	for (; iter != s.end(); iter++) {
		cout << *iter << ' ';
	}
	cout << '\n';
	system("pause");

	/* set 연관 컨테이너 활용.
	set은 집합 형태의 데이터를 쉽게 표현할 수 있으며
	set은 내부적으로 데이터를 자동으로 오름차순으로 정렬하며
	모든 값이 키 값으로 작용하므로 특정원소가 존재하는지 등도 쉽게 알아낼 수 있다.
	기본적으로 키의 중복을 허용하지 않는다.
	*/ 
}