#include <iostream>

using namespace std;

const int SIZE = 8;
int sumArr(int*, int*);

int main() {

	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	
	int sum = sumArr(arr, arr+SIZE); // arr+SIZE - �ּ� // arr - ù��° �ּ�
	cout << "�Լ���" << SIZE << "������ �� : " << sum << endl;

	int sum2 = sumArr(arr, arr+3);
	cout << "�Լ��� " << "������ �ε��� ������ ��" << sum2 << endl;


	return 0;
}

int sumArr(int* begin, int* end) { // being - �迭�� ù��° �ּ� // end - �迭�� ������ �ּ�
	//�迭�� ���۰� ����

	int total = 0;
	int* pt;

	for (pt=begin; pt!=end; pt++) {//���ۺ��� �����ؼ� ���������� ���ؼ� total�� �����ش�.

		total += *pt;
	}


	return total;
}