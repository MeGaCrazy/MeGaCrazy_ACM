#include <bits/stdc++.h>
using namespace std;
const int N = 55, s = 0, t = 1;
bool visit[N];
int res[N][N];
#define inf 1e9
int p[N];
vector<int>adj[N];
int f;
inline void augment(int v, int minedge) {
	if (v == s) { f = minedge; return; }
	else if (p[v] != -1) {
		augment(p[v], min(minedge, res[p[v]][v]));
		res[p[v]][v] -= f, res[v][p[v]] += f;
		adj[v].push_back(p[v]);
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	int tet, shirts, players;
	scanf("%d", &tet);
	while (tet--) {
		int ans = 0;
		memset(adj, 0, sizeof(adj));
		memset(res, 0, sizeof(res));
		map<string, int>mp;
		scanf("%d %d", &shirts, &players);
		mp["XXL"] = players + 2;
		mp["XL"] = players + 3;
		mp["L"] = players + 4;
		mp["M"] = players + 5;
		mp["S"] = players + 6;
		mp["XS"] = players + 7;
		int cost = shirts / 6;
		for (int i = 2; i<8; i++) {
			adj[players + i].push_back(t);
			res[players + i][t] += cost;
		}
		char s1[5] = {}, s2[5] = {};
		for (int i = 2; i<(players + 2); i++) {
			scanf("%s %s", &s1, &s2);
			int a = mp[(string)s1], b = mp[(string)s2];
			adj[s].push_back(i);
			res[s][i] = 1;
			adj[i].push_back(a);
			adj[i].push_back(b);
			res[i][a] = 1;
			res[i][b] = 1;
		}
		while (1) {
			queue<int>q;
			q.push(s);
			memset(visit, 0, sizeof(visit));
			memset(p, -1, sizeof(p));
			visit[s] = 1;
			while (!q.empty()) {
				int a = q.front();
				q.pop();
				if (a == t)break;
				for (int i = 0; i<(int)adj[a].size(); i++) {
					int v = adj[a][i];
					if (res[a][v]>0 && !visit[v]) {
						visit[v] = 1, q.push(v), p[v] = a;
					}
				}
			}
			augment(t, inf);
			if (f == 0)break;
			ans += f;
			f = 0;
		
		}
		/*
		for (int i = players + 2; i <= players + 7; i++) {
			
			for (int j = 2; j<players + 2; j++) {
				if (res[i][j]) { ans++; break; }
			}
		}
		*/
		if (ans >= players)printf("YES\n"); else printf("NO\n");
	}
}
