#include <iostream>
using namespace std;





int main() {
	int max = 0;
	int temp = 0;
	int number;
	int arr[1000];
	int arr1[1000];
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> arr[i] >> arr1[i];
	}
	
	temp = (arr1[0] - arr[1]) + arr1[1];
	max = arr1[0];
	for (int i = 2; i < number; i++) {
		
		if (temp > max) {
			max = temp;
		}
		temp = (temp - arr[i]) + arr1[i];

	}

	cout << max << endl;







}