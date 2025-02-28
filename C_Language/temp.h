// #pragma once는 중복 선언을 막는 문법으로 C++ 쪽 문법이다.
#ifndef _TEMP_H_
#define _TEMP_H_

int add(int a, int b); // 파일 분할 컴파일 방식일때
/*{ 파일 분할 컴파일 방식아닐때
	return a + b; 
} */ 

#endif