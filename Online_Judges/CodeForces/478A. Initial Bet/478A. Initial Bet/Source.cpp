#include <iostream>
using namespace std;

int main() {
	int sum = 0, arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}if (sum == 0) {cout << "-1" << endl;
	}else{(sum % 5 == 0) ? cout << (sum / 5) << endl : cout << "-1" << endl;}
}