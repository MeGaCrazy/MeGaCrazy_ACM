#include <iostream>
using namespace std;
int main() {
	// unsolved
	int n, count = 0;
	cin >> n;
	while (n) {
		n &= (n - 1);
		count++;
	}cout << count << endl;
}