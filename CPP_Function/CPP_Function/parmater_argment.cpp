#include <iostream>

using namespace std;

void helloCPP(int, int);

int main() {

	int times, times2;
	cout << "������ �Է��Ͻʽÿ�.\n";
	cin >> times;
	cout << "���� �ѹ��� �Է�\n";
	cin >> times2;

	helloCPP(times, times2);  // helloCPP(��������(argment), ��������(argment) ); 

	return 0;
}

void helloCPP(int n,int m) {	// helloCPP(�Ű�����(Parameter), �Ű�����(Parameter) )
	for (int i = 0; i < n; i++) 
		cout << "Hello\n";
	for (int i = 0; i < m; i++)
		cout << ", C++\n";
}