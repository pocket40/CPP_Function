#include <iostream>

using namespace std;

void countDown(int);

int main() {
	//���ȣ�� : c++���� �Լ��� �ڱ� �ڽ��� ȣ���� �� �ִ�.

	//void recurs(argumentList) {
	//	//Code#1
	//	if (condition)
	//		recurs(argumentList);
	//	//Code#2
	//}

	countDown(6); 

	return 0;
}

void countDown(int n) {
	cout << "Counting..." << n << endl;
	if (n > 0)
		countDown(n - 1);
	cout << n << "��° ����Լ�" << endl; // ����ȵȸ�ŭ ����
}