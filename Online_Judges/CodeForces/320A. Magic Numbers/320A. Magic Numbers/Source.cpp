#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	for (int i = n; i > 0; i/=10) {
		if (!((i % 10 == 1) || (i % 100) == 14 || (i % 1000) == 144)) {cout << "NO" << endl; return 0;}
	}cout << "YES" << endl;
}