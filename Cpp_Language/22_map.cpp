#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(void) {
	map<string, int> m;
	m["나동빈"] = 1;
	m["홍길동"] = 2;
	m["이순신"] = 3;
	map<string, int>::iterator iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << '\n';
	}
	m["이태일"] = 3;
	cout << m["없는 사람"] << '\n';
	cout << m["없는 사람1"] << '\n';
	iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << '\n';
	}
	system("pause");
	/* map 연관 컨테이너 활용.
	map은 집합 형태의 데이터를 쉽게 표현할 수 있으며
	map은 내부적으로 데이터를 자동으로 오름차순으로 정렬하며
	모든 값이 키 값으로 작용하므로 특정원소가 존재하는지 등도 쉽게 알아낼 수 있다.
	기본적으로 키의 중복을 허용하지 않는다.
	흔히 해쉬 자료구조의 대용으로 사용된다.
	기본적으로 키(Key)와 값(Value)가 쌍을 이룬다.
	*/
}