#include <iostream>
using namespace std;
int main() {
	int n, a[180]; cin >> n;
	for (int i = 0; i < n; i++) {cin >> a[i];}
	for (int i = 0; i < n; i++) { 360%(180-a[i])==0 ? cout << "YES" << endl : cout << "NO" << endl; }

}