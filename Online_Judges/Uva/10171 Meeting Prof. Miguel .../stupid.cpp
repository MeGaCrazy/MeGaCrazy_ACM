#include <bits/stdc++.h>
using namespace std;
const int N = 26;
int Y[N][N];
int M[N][N];
#define inf 1e9
int main() {
	int n;
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	while (scanf("%d", &n), n) {
		char typ, dir, a, b;
		int cost;
		for (int i = 0; i<26; i++) {
			for (int j = 0; j<26; j++) {
					Y[i][j] = inf;
					M[i][j] = inf;
				
			}
		}
		for (int i = 0; i<n; i++) {
			scanf(" %c %c %c %c %d", &typ, &dir, &a, &b, &cost);
			if (typ == 'Y') {
				Y[a - 'A'][b - 'A'] = cost;
				if (dir == 'B')Y[b - 'A'][a - 'A'] = cost;
			}
			else {
				M[a - 'A'][b - 'A'] = cost;
				if (dir == 'B')M[b - 'A'][a - 'A'] = cost;
			}
		}
		char dis1, dis2;
		scanf(" %c %c", &dis1, &dis2);
		Y[dis1 - 'A'][dis1 - 'A'] = 0, M[dis2 - 'A'][dis2 - 'A'] = 0;
		for (int k = 0; k < 26; k++) {
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					Y[i][j] = min(Y[i][j], Y[i][k] + Y[k][j]);
					M[i][j] = min(M[i][j], M[i][k] + M[k][j]);
				}
			}
		}
		int ans = 2e9;
		for (int i = 0; i < 26; i++) {
			int a = Y[dis1 - 'A'][i] + M[dis2 - 'A'][i];
			if (Y[dis1 - 'A'][i] == inf || M[dis2 - 'A'][i] == inf)continue;
			if (ans>a) {
				ans = a;
			}
		}
		if (ans >= inf) {
			printf("You will never meet.\n");
		}
		else {
			printf("%d", ans);
			for (int i = 0; i < 26; i++) {
				int a = Y[dis1 - 'A'][i] + M[dis2 - 'A'][i];
				if (ans==a) {
					printf(" %c", (i + 'A'));
				}
			}
			printf("\n");
		}

	}
}