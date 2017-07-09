#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, m, x, best = -1, ibest;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {cin >>x;
		if ( ((x+m-1)/m)  >= best) {best =((x+m-1)/m);ibest = i + 1;} 
	}cout << ibest << endl;
}