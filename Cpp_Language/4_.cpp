#include<iostream>
#include<string>

using namespace std;

int main(void) {
	string input;
	//cin >> input;
	////cout << input << endl;
	//for (int i = 0; i < input.size(); i++) {
	//	cout << input[i] << '\n';
	//}
	//cout << input << '\n';

	getline(cin, input);
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << '\n';
	}
	cout << input << '\n';
	system("pause");
	return 0;
}