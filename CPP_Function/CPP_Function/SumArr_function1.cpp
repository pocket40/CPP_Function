#include <iostream>

using namespace std;

const int SIZE = 8;
int sumArr(int*, int*);

int main() {

	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	
	int sum = sumArr(arr, arr+SIZE); // arr+SIZE - 주소 // arr - 첫번째 주소
	cout << "함수의" << SIZE << "까지의 합 : " << sum << endl;

	int sum2 = sumArr(arr, arr+3);
	cout << "함수의 " << "세번쨰 인덱스 까지의 합" << sum2 << endl;


	return 0;
}

int sumArr(int* begin, int* end) { // being - 배열의 첫번째 주소 // end - 배열의 마지막 주소
	//배열의 시작값 끝값

	int total = 0;
	int* pt;

	for (pt=begin; pt!=end; pt++) {//시작부터 시작해서 끝까지까지 더해서 total에 더해준다.

		total += *pt;
	}


	return total;
}