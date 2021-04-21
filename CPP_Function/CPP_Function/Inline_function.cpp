#include <iostream>

using namespace std;

inline float square(float x) { return x * x; } // 함수의 선언과 대입을 한번에 한다.

int main() {
	//인라인 함수
	/*
	일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
	인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
	컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드를 대체
	*/

	int a = 5;
	cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는?" << endl;
	float b = square(a);
	cout << b << endl;
}