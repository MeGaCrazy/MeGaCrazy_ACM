#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m; int temp = n;
	if (n == 0 || n < m) {cout << "-1" << endl;}
	else {
		n = (((n + 2) - 1) / 2);
		while (true){
			if (n%m == 0 && n<=temp) {cout << n << endl; break;}
			else if (n > temp) {cout << "-1" << endl;break;}else n++;
		        }
	    }
}

