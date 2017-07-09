#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main() {
	int T; string s;
	cin >> T;
	cin.ignore();
	getline(cin, s);
	while (T--) {	
		int nBitsoffarg = 0; vector<string>v;
		////////////
		while (getline(cin, s)&&!s.empty()) {
			int length = s.length();
			nBitsoffarg += length;
			v.push_back(s);
		}
		/////////////
		map<string, int>m;
		int noffrag = v.size(),noBitoffile = nBitsoffarg / (noffrag / 2);
		for (int i = 0; i < noffrag; i++) {
			for (int j = i+1; j < noffrag; j++) {
				s = v[i] + v[j];
				if (s.length() == noBitoffile) {
					m[v[i] + v[j]]++;
					m[v[j] + v[i]]++;
				}
			}
		}
		//////////
		int min = -1;
		for (auto itr = m.begin(); itr != m.end(); itr++) {
			if (itr->second > min) {
				s = itr->first;
				min = itr->second;
			}
		}
		cout << s << endl;
		if (T)cout << endl;
	}
		
}