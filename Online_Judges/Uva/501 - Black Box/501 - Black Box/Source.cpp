#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
int main() {
	int t, n, m, x; string s;
	scanf("%d", &t);
	getline(cin, s);
	while (t--) {
		vector<int>a, u;
		set<int>myset;
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			a.push_back(x);
		}
		for (int i = 0; i < m; i++) {
			scanf("%d", &x);
			u.push_back(x);
		}
		int i = 0, j = 0, cnt = 0;
		while (j<m) {	
			while(i<u[j]&&i<n)
			myset.insert(a[i++]);	
			set<int>::iterator itr = myset.begin();
			int r = 0;
			while (r++ < cnt)itr++;
			printf("%d\n", *itr);
			cnt++;
			j++;
		}
		if (t)printf("\n");
	}

}