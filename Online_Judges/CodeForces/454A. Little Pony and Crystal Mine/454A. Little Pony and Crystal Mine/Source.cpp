#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < (n - 2); i+=2) {
	     int count = 0;
		for (int j = 0; j < (n - i) / 2; j++) {
			cout <<"*";
			count++;}
		for (int s = 0; s <= i; s++) {
			cout << "D";
			count++;
		}
		for (int w = 0; w < (n-count); w++) {
			cout <<"*";
		}
		cout << endl;
	}
	for (int i = n; i > 0; i-=2) {
		int count = 0;
		for (int j = 0; j < (n - i) / 2; j++) {
			cout << "*"; count++;
		}
		for (int s = 1; s <= i; s++) {
			cout << "D"; count++;
		}
		for (int w = 0; w < (n - count); w++) {
			cout << "*";
		}
		cout << endl;
	}
}