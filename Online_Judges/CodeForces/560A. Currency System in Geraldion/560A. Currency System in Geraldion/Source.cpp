#include <iostream>
using namespace std;
int main() {
	int n, bla = 1, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 1)bla = -1;
	}cout << bla << endl;
}