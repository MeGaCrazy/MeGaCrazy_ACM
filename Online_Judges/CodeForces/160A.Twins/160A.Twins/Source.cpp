#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int count = 0;
	int test = 0;
	int coinN[100];
	int ncoin;
	int sum = 0;
	cin >> ncoin;
	for (int i = 0; i < ncoin; i++) {
		cin >> coinN[i];
		sum += coinN[i];
	}
	sort(coinN, coinN + ncoin);
	sum = (sum / 2 + 1);
	for (int i = ncoin - 1; i >= 0; i--) {
		test += coinN[i];
		count++;
		if (test >= sum) {
			break;
		}
	}
	cout << count << endl;

}