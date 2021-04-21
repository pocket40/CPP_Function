#include <iostream>

using namespace std;

const int SIZE = 8;

//int SumArr(int[], int);
int SumArr(int*, int);

int main() {

	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	cout << "size of arr :" << sizeof arr << endl; // main�Լ�(arr) - ��ü�� byte�� �ǹ� = 32byte
	// arr == &arr[0]
	int sum = SumArr(arr, SIZE);

	cout << "�Լ��� �� ���� : " << sum << "�Դϴ�.\n";

	return 0;
}

int SumArr(int* arr, int SIZE) { 
	int total = 0;

	cout << "size of arr :" << sizeof arr << endl; // SumArr�Լ�(arr) - arr[0] ù��° �ּҸ� ������. = 1byte

	for (int i = 0; i < SIZE; i++) {
		total += arr[i];
	}

	return total;
}