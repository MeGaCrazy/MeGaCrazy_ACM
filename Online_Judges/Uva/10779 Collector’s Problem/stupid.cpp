#include <bits/stdc++.h>
using namespace std;
const int N = 40;
int res[N][N], p[N];
bool visit[N];
vector<int>adj[N];
int f;
#define inf 1e9
void augment(int v, int minEdge) {
	if (v == 1) { f = minEdge; return; }
	else if (p[v] != -1) {
		augment(p[v], min(minEdge, res[p[v]][v]));
		res[p[v]][v] -= f; res[v][p[v]] += f;
		adj[v].push_back(p[v]);
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	int t, n, m, cas = 1;
	scanf("%d", &t);
	while (t--) {
		int ans = 0;
		memset(adj, 0, sizeof(adj));
		memset(res, 0, sizeof(res));
		scanf("%d %d", &n, &m);
		int T = n + m + 1;
		for (int i = 1, num; i <= n; i++) {
			scanf("%d", &num);
			for (int j = 1, a; j <= num; j++) {
				scanf("%d", &a);
				a += n;
				if (!res[i][a]) { adj[i].push_back(a); }
				res[i][a]++;
			}
		}
	
		for (int i = 2; i <= n; i++) {
			for (int j = 1 + n; j <= n + m; j++) {
				if (res[i][j])--res[i][j];
				else {
					res[j][i] = 1;
					adj[j].push_back(i);
				}
			}
		}

		for (int i = n + 1; i <= n + m; i++) {
			adj[i].push_back(T); res[i][T] = 1;
		}

	
		while (1) {
			queue<int>q;
			q.push(1);
			memset(visit, 0, sizeof(visit));
			memset(p, -1, sizeof(p));
			visit[1] = 1;
			while (!q.empty()) {
				int a = q.front();
				q.pop();
				if (a == T)break;
				for (int i = 0; i<(int)adj[a].size(); i++) {
					int v = adj[a][i];
					if (res[a][v]>0 && !visit[v]) {
						q.push(v), visit[v] = 1, p[v] = a;
					}
				}
			}
			augment(T, inf);
			if (!f)break;
			ans += f;	
			f = 0;
		}
		printf("Case #%d: %d\n", cas++, ans);
	}
}