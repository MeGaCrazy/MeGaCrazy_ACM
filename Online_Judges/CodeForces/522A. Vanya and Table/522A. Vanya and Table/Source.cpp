#include <iostream>
using namespace std;
int main() {
	long long sum = 0; int x1, n,i=0,y1, x2, y2;
	for (cin >> n; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		sum += (x2 - x1 + 1)*(y2 - y1 + 1);
	}cout << sum << endl;
}