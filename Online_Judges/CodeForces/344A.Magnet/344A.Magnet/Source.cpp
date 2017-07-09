#include <iostream>
using namespace std;

int main() {
	int count = 1;
	int arr[100000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == 10 && arr[i + 1] == 01 || arr[i] == 01 && arr[i + 1] == 10) {
			count++;
		}
	}
	cout << count << endl;





}