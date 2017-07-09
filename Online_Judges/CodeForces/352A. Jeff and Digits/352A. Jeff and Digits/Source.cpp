#include <iostream>
using namespace std;
int main() {
	int v[6] = {0}, n, x;
	cin >> n;
	for (int i = 0; i<n; i++) {cin >> x;v[x]++;}
	if (v[5] < 9&& v[0]>0)cout << "0" << endl;
	else if (v[5] >= 9 && v[0]>0) {
		int temp = v[5] / 9;
		for (int i = 0; i < (temp * 9); i++)cout << "5";
		while (v[0] > 0) { cout << "0"; v[0]--; }
	}else cout << -1 << endl;
}