#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
//	ios::sync_with_stdio(false);
	int t; string s;
	cin >> t;
	cin.ignore();
	getline(cin, s);
	while (t--) {
		map<string, int>m;
		int nbr = 0;
		while (getline(cin, s) && s[0] != '\0') {m[s]++; nbr++;}
		for (auto itr = m.begin(); itr != m.end(); itr++) {
			printf("%s %.4f\n", (*itr).first.data(),((double)itr->second / (double)nbr) * 100);
		}
		if (t)cout << endl;
	}
}