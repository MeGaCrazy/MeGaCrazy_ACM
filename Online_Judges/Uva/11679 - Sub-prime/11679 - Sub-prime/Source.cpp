#include <iostream>
using namespace std;
int main() {
	int n, r[25] = {-1}, b, d, v,flag=0, c;
	while (scanf("%d %d", &b, &n) == 2) {
		flag = 0;
		if (!n&&!b)return 0;
		for (int i = 1; i <= b; i++) {cin >> r[i];}
		d = 0, v = 0, c = 0;
		for (int i = 0; i < n; i++) {
			cin >> d >> c >> v;
			r[d] -= v;
			r[c] += v;
		}
		for (int i = 1; i <= b; i++) {
			if (r[i] < 0) { cout << "N" << endl; flag=1; break; }
		}if(flag!=1)cout << "S" << endl;
	}
}