#include <iostream>
using namespace std;
int main() {
	int n, count=0, a, b=0 ;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a > 0)b += a;
		else if (a < 0 && b <= 0)count++;
		else if (a < 0 && b>0)b--;
	}cout << count << endl;
}