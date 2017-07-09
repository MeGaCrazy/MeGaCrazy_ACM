#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, sum1 = 0, sum2 = 0; string s;
	cin >> n >> s;
	for (int i = 0; i <n; i++) {
		if (!(s[i] == '4' || s[i] == '7')){cout << "NO" << endl; return 0;}
		if ((i + 1) <= (n/ 2))sum1 +=(s[i]-'0'); else sum2 += (s[i]-'0');
	}sum1 == sum2 ? cout << "YES" << endl : cout << "NO" << endl;
}