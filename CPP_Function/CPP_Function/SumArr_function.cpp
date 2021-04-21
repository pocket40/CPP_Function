#include <iostream>

using namespace std;

const int SIZE = 8;

//int SumArr(int[], int);
int SumArr(int*, int);

int main() {

	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	cout << "size of arr :" << sizeof arr << endl; // main함수(arr) - 전체의 byte를 의미 = 32byte
	// arr == &arr[0]
	int sum = SumArr(arr, SIZE);

	cout << "함수의 총 합은 : " << sum << "입니다.\n";

	return 0;
}

int SumArr(int* arr, int SIZE) { 
	int total = 0;

	cout << "size of arr :" << sizeof arr << endl; // SumArr함수(arr) - arr[0] 첫번째 주소를 가진다. = 1byte

	for (int i = 0; i < SIZE; i++) {
		total += arr[i];
	}

	return total;
}