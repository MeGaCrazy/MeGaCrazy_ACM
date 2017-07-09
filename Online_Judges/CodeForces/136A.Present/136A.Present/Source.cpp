#include <iostream>
using namespace std;



int main() {
	int done = -1;
	int number;
	int arr[100];
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= number; i++) {
		for (int j =0; j < number; j++) {
			if (done == j) {
				continue;
			}
			if (arr[j] == i) {
				cout << j+1;
				done = j;
				break;
			}
		}
		cout << " ";
	}
	cout << endl;


}