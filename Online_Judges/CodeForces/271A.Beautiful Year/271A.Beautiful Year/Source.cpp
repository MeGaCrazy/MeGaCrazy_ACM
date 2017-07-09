#include <iostream>
using namespace std;
int main() {
	int arr[4];
	int y;
	cin >> y;
	for (int i = y + 1; i <10000; i++) {
		int flag = 0;
		int temp = i;
		for (int j = 0; j < 4; j++) {
			arr[j] = temp % 10;
			temp /= 10;
		}
		for (int w = 0; w < 4; w++) {
			for (int s = w+1; s< 4; s++) {
				if (arr[w] == arr[s]) {
					flag = 1;
				}
			}
		}
		if (flag != 1) {
			cout << i << endl;
			break;
		}
	}






}