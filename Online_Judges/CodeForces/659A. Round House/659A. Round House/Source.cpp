#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, a, b; cin >> n >> a >> b;
	if (b>=0) {a = (a + b) % n;cout << a+((a==0)*n) << endl;}
	else{
		if (abs(b) < a) { cout << a-abs(b) << endl; }
		else{a = (abs(abs(b)-a)) % n;cout << n - a << endl;}
	    }
}