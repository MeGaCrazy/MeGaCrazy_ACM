#include <iostream>
using namespace std;
int main() {
	int n,c,a,b, count = 1;
	cin >> n>>c>> a;
	for (int i = 0; i < n-1; i++) {
		cin >> b;
		if ((b - a) <= c)count++; else count = 1;
		a = b;
	}cout << count << endl;
}