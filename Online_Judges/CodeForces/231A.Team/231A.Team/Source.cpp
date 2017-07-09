#include <iostream>
using namespace std;




int main() {
	int n, result=0;
	int arr[1000][3];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		int  count = 0;
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] ==1) {
				count++;
			}
		}
		if (count >= 2) {
			result++;
		}
	}
	
	cout << result << endl;
		








}