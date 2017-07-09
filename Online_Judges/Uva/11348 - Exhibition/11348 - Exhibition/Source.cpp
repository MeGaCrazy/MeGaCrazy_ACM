#include <vector>
#include <map>
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	int t, n, m, a,caase=1;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		vector<vector<int>>v(n); map<int,int>mymap;
		int i = 0;
		while (i < n) {
			scanf("%d", &m);
			while (m--) {
				scanf("%d", &a);
				v[i].push_back(a); mymap[a]++;
			}i++;	
		 }
		int total = 0;
		printf("Case %d:", caase++);
		for (auto itr = mymap.begin(); itr != mymap.end(); itr++) {
			if (itr->second == 1)total++;
		}
		for (int i = 0; i < n; i++) {
			int length = v[i].size(), cnt = 0;
		   for (int j = 0; j < length; j++) {
			   if (mymap[v[i][j]] == 1)cnt++;
			}
		   printf(" %.6lf%%", (double)cnt*100.0/ (double)total);
		}
		printf("\n");
	}
}