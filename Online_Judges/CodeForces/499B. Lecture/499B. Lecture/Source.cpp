#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	string s1, s2, s, s3;
	map<string, string>f;
	int n, m; cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> s1>>s2;	
		if (s1.length() <= s2.length())f[s1] = s1; else f[s1] = s2;
	}
	for (int i = 0; i < n; i++) {
		cin >> s3;
		s += f[s3]+" ";
	}cout << s << endl;
}