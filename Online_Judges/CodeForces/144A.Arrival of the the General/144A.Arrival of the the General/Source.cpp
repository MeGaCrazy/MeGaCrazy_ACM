#include <iostream>
using namespace std;
int main() {
	int n, a, imin=0, imax=0, bmin = 10000, bmax = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		  cin >> a;	
		if (a > bmax) {  bmax = a;  imax = i;}
		if (a <= bmin){  bmin = a;  imin = i;}
	}
	--n;
	if (imax > imin)++imin;
	cout << imax + (n - imin) << endl;
}