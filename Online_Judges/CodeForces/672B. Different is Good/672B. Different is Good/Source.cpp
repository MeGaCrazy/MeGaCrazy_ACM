#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
	int n; string s; set<char>a;
	cin >> n >> s;
	if (n > 26){cout << -1 << endl; return 0;}
	for (int i = 0; i < n; i++) {a.insert(s[i]);}
	 cout << n - a.size() << endl;
}