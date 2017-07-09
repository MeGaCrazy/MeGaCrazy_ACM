#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int adj[N][N];
#define inf 1e9

int main() {
	int a, b, cas = 1;
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	int n = 0,t=0;
	memset(adj, -1, sizeof(adj));
	while (1) {
		t = 0;
		while (1) {
			scanf("%d %d", &a, &b);
			if (!a && !b)break;
			adj[a][b] = 1;
			n = max(max(a, b), n);
		}

		//clear
		for (int i = 1; i<=n; i++) {
			for (int j = 1; j<=n; j++) {
				adj[i][j]=((adj[i][j] == 1) ?1:inf);
			}
		}
		// APSP
		int sum = 0;
		for (int k = 1; k<=n; k++) {
			for (int i = 1; i<=n; i++) {
				for (int j = 1; j<=n; j++) {
					adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
				}
			}
		}

		for (int i = 1; i<=n; i++) {
			for (int j = 1; j<=n; j++) {
				if (i != j&&adj[i][j]!=inf) {
					sum += adj[i][j];
					t++;
				}
			}
		}

		printf("Case %d: average length between pages = %.3f clicks\n", cas++, (double)sum /t);
		scanf("%d %d", &a, &b);
		n = 0;
		if (!a && !b)break;
		else {
			memset(adj, -1, sizeof(adj));
			adj[a][b] = 1;
			n = max(a, b);
		}
	}

}