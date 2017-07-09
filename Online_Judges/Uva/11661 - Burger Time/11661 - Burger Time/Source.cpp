#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
	string s; int n;
	while (cin >> n, n) {
		int t = 2e9, di = -1, ri = -1, flag = 0;
		cin >> s;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'Z') { cout << "0" << endl; flag = 1; break; }
			else if (s[i] == 'D')di = (i + 1);
			else if (s[i] == 'R')ri = (i + 1);
			if (di >= 0 && ri >= 0)t = min(t, abs(di - ri));
		}if (flag == 0)cout << t << endl;
	}
}