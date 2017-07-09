#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	string s;
	map <string, int>m;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (m[s]++)cout << s << m[s] - 1 << endl; else cout << "OK" << endl;
	}
} 