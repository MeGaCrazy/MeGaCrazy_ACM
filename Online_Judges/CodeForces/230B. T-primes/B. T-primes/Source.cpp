#include <iostream>
#include <math.h>
using namespace std;
bool prime(int x) {
	if (x == 1)return false;
	for (int i = 2; i <= sqrt(x); i++) {if (x%i == 0)return false;}
	return true;
}
int main() {
	long long m,n,temp;
	cin >> n;
	while (n--) {
		cin >> m ; temp = sqrt(m); if (temp*temp == m && prime(temp)==true)cout << "YES" << endl; else cout << "NO" << endl;}
}