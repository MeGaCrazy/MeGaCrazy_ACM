#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, a,flag=0, b; string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> a >> b;
		if (a >= 2400 && b > a)flag = 1;
	}flag == 1 ? cout << "YES" << endl : cout << "NO" << endl;
}