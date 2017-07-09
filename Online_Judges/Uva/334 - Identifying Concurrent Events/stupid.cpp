#include <bits/stdc++.h>
using namespace std;
#define inf 1e9
const int N = 105;
bool adj[N][N];


int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	int t, cas = 1;
	while (scanf("%d", &t), t) {
		for (int i = 0; i <= 101; i++) {
			for (int j = 0; j <= 101; j++) {
				adj[i][j] = 0;
			}

		}
		int n; char s[10] = {};
		string str[105];
		int nodes = 1;
		int num = 0;
		map<string, int>mp;
		for (int i = 0; i < t; i++) {
			scanf("%d", &n);
			vector<int>v;
			for (int j = 0; j < n; j++) {
				scanf("%s", &s);
				if (mp[(string)s] == 0) {
					mp[s] = nodes++;
					str[mp[s]] = (string)s;
					num = max(num, mp[s]);
					v.push_back(mp[s]);
				}
			}
			// make path
			for (int k = 0; k < (int)v.size()-1; k++) {
				adj[v[k]][v[k + 1]] = 1;
			}
		}
		 // queries
			int q;
			scanf("%d", &q);
			char a[10]={}, b[10] = {};
			for (int i = 0; i < q; i++) {
				scanf("%s %s", &a, &b);
				adj[mp[a]][mp[b]] = 1;
			}
			
			
			// APSP
			for (int k = 1; k <= num; k++) {
				for (int i = 1; i <= num; i++) {
					for (int j = 1; j <= num; j++) {
						adj[i][j] |= adj[i][k] & adj[k][j];
					}
				}
			}	
			// cal
			int ans = 0;
			vector<pair<int, int> >vans;
			for (int i = 1; i <= num; i++) {
				for (int j = i+1; j <= num; j++) {

					if (!adj[i][j]&&!adj[j][i]) { ans++, vans.push_back(make_pair(i, j)); };
				}
			}
			
			if (ans != 0) {
				printf("Case %d, %d concurrent events:\n", cas++, ans);
				for (int i = 0; i < 2&&i<vans.size(); i++) {
					printf("(%s,%s) ", str[vans[i].first].c_str(), str[vans[i].second].c_str());
					//printf(i==0?"(%s,%s)":" (%s,%s)", str[vans[i].first].c_str(), str[vans[i].second].c_str()); // that get wrong answer cause he need space even in 1 element
				}
				printf("\n");
			}
			else {
				printf("Case %d, no concurrent events.\n", cas++);
			}

		}

}
