#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int number;
	int arr[100];
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + number);
	for (int i = 0; i < number; i++) {
		cout << arr[i] << " ";
	}




}