#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	char v[1500];
	string s;
	int n, m; 
	cin >> m;
	while (m--) {
		cin >> n; int temp = n;
		vector<string>t;
		while(temp--){
			s = "";
			scanf("%s", v);
			int length = strlen(v);
			for (int i = 0, j = 0;i<length;i++) {
				if (j == 3)s+= '-', ++j;
				if (v[i] == 'A' || v[i] == 'B' || v[i] == 'C')s+= '2',++j;
				else if (v[i] == 'D' || v[i] == 'E' || v[i] == 'F')s+= '3',++j;
				else if (v[i] == 'G' || v[i] == 'H' || v[i] == 'I')s+= '4',++j;
				else if (v[i] == 'J' || v[i] == 'K' || v[i] == 'L')s+= '5',++j;
				else if (v[i] == 'M' || v[i] == 'N' || v[i] == 'O')s+= '6',++j;
				else if (v[i] == 'P' || v[i] == 'R' || v[i] == 'S')s+= '7',++j;
				else if (v[i] == 'T' || v[i] == 'U' || v[i] == 'V')s+= '8',++j;
				else if (v[i] == 'W' || v[i] == 'X' || v[i] == 'Y')s+= '9',++j;
				else if (v[i] != '-')s+= v[i],++j;
			}
			s+= '\0';
			t.push_back(s);
		}
		sort(t.begin(), t.end());
		int count = 1, flag = 0;
		for (int i = 1; i < n; i++) {
			count = 1;
			while (i < n&&t[i] == t[i - 1]) {
				count++; i++;
			}
			if (count > 1) {
				i--;
				cout << t[i] << " " << count << endl;
				flag = 1;
			}

		}
		if (!flag) {
			cout << "No duplicates." << endl;
		}if (m)cout << endl;
	}
}