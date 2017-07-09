#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
int arr[15][15];
int r, c, st, ans, ansloop;
char s[15][15];
int flag[105];
bool ok;
void build() {
	int num = 1;
	for (int i = 0; i<r; i++) {
		for (int j = 0; j<c; j++) {
			arr[i][j] = num++;
		}
	}
}
void buildadj() {
	int t;
	for (int i = 0; i<r; i++) {
		for (int j = 0; j<c; j++) {
			if (s[i][j] == 'N') {
				t =(i == 0 ? -1 : arr[i - 1][j]);
				adj[arr[i][j]].push_back(t);
			}
			else if (s[i][j] == 'S') {
				t = (i == r - 1 ? -1 : arr[i + 1][j]);
				adj[arr[i][j]].push_back(t);
			}
			else if (s[i][j] == 'E') {
				t = (j==c-1? -1 : arr[i][j + 1]);
				adj[arr[i][j]].push_back(t);
			}
			else if (s[i][j] == 'W') {
				t = (j == 0 ? -1 : arr[i][j - 1]);
				adj[arr[i][j]].push_back(t);
			}
		}
	}
}
void dfs(int st_vert,int cnt) {
	if (!ok)return;
	
	flag[st_vert] = cnt++;
	for (int i = 0; i<(int)adj[st_vert].size(); i++) {
		int a = adj[st_vert][i];
		if (a == -1) {
			ans = cnt;
			ok = false;
		}
		else if (flag[a] != -1) {
			ans = flag[a];
			ansloop = flag[st_vert] - flag[a] + 1;
			ok = false;
		}
		else {
			dfs(a,cnt);
		}
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif

	while (scanf("%d %d %d", &r, &c, &st), r&&c&&st) {
		adj.assign(r*c + 5, vi());
		for (int i = 0; i<r; i++) {
			scanf("%s", &s[i]);
		}
		memset(flag, -1, sizeof(flag));
		ansloop = -1, ans = 0;
		ok = true;
		build();
		buildadj();
		dfs(st,0);
		if (ansloop == -1) {
			printf("%d step(s) to exit\n", ans);
		}
		else {
			printf("%d step(s) before a loop of %d step(s)\n", ans, ansloop);
		}
	}
}