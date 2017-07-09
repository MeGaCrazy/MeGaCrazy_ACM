#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int n, word = 0, flag = 0, best = 0; string s;
	cin >> n >> s;
	for (int i = 0, j = 0; i < n; i++) {
		if (s[i] == '_') {j = 0; continue; }
		if (s[i] == '(') { flag = 1,j=0; continue;}
		if (flag == 0 && s[i] != '_')++j, best = max(best, j);
		else if (flag == 1) {
			for (int count=0; i < n; i++) {
				if ((s[i] == '_' || s[i] == ')') && count>0)word++, count = 0;
				if(s[i] == ')') {flag = 0; break;}
				if (s[i] != '_')count++;
			 }
		}
	}cout << best << " " << word << endl;
}