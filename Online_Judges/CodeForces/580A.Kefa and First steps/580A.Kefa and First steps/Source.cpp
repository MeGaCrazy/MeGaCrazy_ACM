#include <iostream>
using namespace std;


int main() {
	
	int j = 0;
	int arr1[100000];
	int temp = 1;
	int count = 1;
	int arr[100000];
	long long number;
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < number-1; i++) {
		if (arr[i + 1] >= arr[i]) {
			count++;
		}
		else
		{  
			arr1[j++] = count;
			count = 1;
		}
	}
	int max = arr1[0];
	for (int i = 0; i < j; i++) {
		if (arr1[i] > max) {
			max = arr1[i];
		}
	}
	if (max >= count) {
		cout << max << endl;
	}
	else
	{
		cout << count << endl;
	}
}