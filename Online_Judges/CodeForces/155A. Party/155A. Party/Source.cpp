#include <iostream>
using namespace std;
int main() {
	// to be continue :) 
	int n, x, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == -1)count++;
	}cout << count + (n % 2 != 0) << endl;
}