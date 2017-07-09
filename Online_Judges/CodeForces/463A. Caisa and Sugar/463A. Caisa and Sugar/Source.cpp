#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, s, a, b, best = -1;
	cin >> n >> s;
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		if (!b)b = 100;
		if (!(a > s|| (a==s && b!=100))) best = max(100 - b, best);
	}cout << best << endl;
}