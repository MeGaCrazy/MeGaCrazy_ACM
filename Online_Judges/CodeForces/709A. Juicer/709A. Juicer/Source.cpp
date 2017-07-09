#include <iostream>
using namespace std;
int main() {
	int n, b,a,d, count = 0, t = 0;
	cin >> n >> b >> d;
	for (int i = 0; i < n&&cin>>a; i++) {
		if (a > b)continue; else if ((t + a) > d)count++, t = 0; else t += a;
	}cout << count << endl;
}