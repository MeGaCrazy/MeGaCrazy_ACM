#include <bits/stdc++.h>
using namespace std;
const int N = 1155;
int res[N][N], p[N];
bool visit[N];
vector<int>adj[N];
int categ, prob;
#define inf 1e9
const int s = 0;
int t, f;
void augment(int v, int minflow) {
	if (s == v) { f = minflow; return; }
	else if (p[v] != -1) {
		augment(p[v], min(minflow, res[p[v]][v]));
		res[p[v]][v] -= f, res[v][p[v]] += f;
		adj[v].push_back(p[v]);
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif

	while (scanf("%d %d", &categ, &prob), (categ || prob)) {
		int ans = 0, tarans = 0;
		memset(adj, 0, sizeof(adj));
		memset(res, 0, sizeof(res));
		t = prob + categ + 1;
		for (int i = 1, w; i <= categ; i++) {
			scanf("%d", &w);
			tarans += w;
			adj[i].push_back(t);
			res[i][t] += w;
		}		
		for (int i = categ + 1, n; i <= prob + categ; i++) {
			adj[s].push_back(i);
			res[s][i] = 1;
			scanf("%d", &n);
			for (int j = 0, a; j<n; j++) {
				scanf("%d", &a);
				adj[i].push_back(a);
				res[i][a] += 1;
			}
		}

		while (1) {
			queue<int>q;
			memset(visit, 0, sizeof(visit));
			memset(p, -1, sizeof(p));
			q.push(s);
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

		if (ans == tarans) {
			printf("1\n");
			for (int i = 1; i <= categ; i++) {
				for (int j = categ + 1; j <= categ + prob; j++) {
					if (res[i][j] == 1) {
						printf("%d ", j - categ);
					}
				}
				printf("\n");
			}

		}
		else {
			printf("0\n");
		}

	}
}