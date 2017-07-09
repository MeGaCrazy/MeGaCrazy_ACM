#include <iostream>
using namespace std;
int main() {  // in this solu we use kandane algoratiam
	int n,a,ones = 0, max =0, bla = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 0)bla++;
		else bla--, ones++;
		if (bla < 0)bla = 0;
		if (bla > max)max = bla;
	}
	if (max == 0) {
		cout << --ones << endl;
	}
	else
	{
		ones += max;
		cout << ones << endl;
	} 
}