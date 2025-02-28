#ifndef GOMOKU_UTIL_H
#define GOMOKU_UTIL_H
using namespace std;
#include<vector>
#include<sstream>
class Util {
public:
	vector<string> getTokens(string input, char delimiter);
	// input -> 입력한 문자 "Hello World"
	// delimiter -> 자를 기준문자 " "(공백)
	// 결과 -> "Hello", "World"
};
#endif