#include <iostream>

using namespace std;

void helloCPP(int, int);

int main() {

	int times, times2;
	cout << "정수를 입력하십시오.\n";
	cin >> times;
	cout << "정수 한번더 입력\n";
	cin >> times2;

	helloCPP(times, times2);  // helloCPP(전달인자(argment), 전달인자(argment) ); 

	return 0;
}

void helloCPP(int n,int m) {	// helloCPP(매개변수(Parameter), 매개변수(Parameter) )
	for (int i = 0; i < n; i++) 
		cout << "Hello\n";
	for (int i = 0; i < m; i++)
		cout << ", C++\n";
}