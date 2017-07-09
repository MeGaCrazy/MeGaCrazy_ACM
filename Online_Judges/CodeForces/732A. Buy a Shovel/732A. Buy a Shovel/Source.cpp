#include <iostream>
using namespace std;
int main() {
	int k, r;
	cin >> k >> r;
	for (int i = 1; i > 0; i++) {
		int temp = k*i;
		if (temp% 10 == 0 || (temp - r) % 10 == 0){cout << i << endl; return 0;}
	}
}