#include <iostream>
using namespace std;


int main() {
	int flag = 0;
	
	int arr[100][100];
	int number;
	cin >> number;
	for (int i = 0; i < number; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < number; j++) {
			sum += arr[j][i];
		}
		if (sum != 0) {
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}






}