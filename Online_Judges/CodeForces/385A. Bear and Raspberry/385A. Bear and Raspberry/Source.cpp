#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, c,b,a, best = 0;
	cin >> n >> c >> a;
	for (int i = 1; i < n; i++) {
		cin >> b; 
		if (a > b)best = max(a - (b + c), best); a = b;
	}cout << best << endl;
}