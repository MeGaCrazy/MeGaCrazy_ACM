#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, x, a, t,i=0;
	cin >> n;
	while (n--) {
		t = -1;
		cin >> x;
		while (x--) {
			cin >> a;
			t = max(t, a);
		}cout << "Case " << ++i << ": " << t << endl;
	}
}