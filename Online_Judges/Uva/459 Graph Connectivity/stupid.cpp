#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <string.h>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
#define visited 1
#define unvisited 0
bool visit[27];
void dfs(int c) {
	visit[c] = visited;
	for (int i = 0; i<(int)adj[c].size(); i++) {
		if (visit[adj[c][i]] == unvisited) {
			dfs(adj[c][i]);
		}
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	int t;
	scanf("%d", &t);
	getchar();
	while (t--) {
		char a;
		scanf(" %c", &a);
		int n = a - 'A' + 1;
		cin.ignore();
		memset(visit, 0, sizeof(visit));
		adj.assign(n, vi());
		string s, tmp="";
		while (getline(cin, s),s!="") {
			adj[s[0] - 'A'].push_back(s[1] - 'A');
			adj[s[1] - 'A'].push_back(s[0] - 'A');
			s = tmp;
		}
		int ans = 0;
		for (int i = 0; i<n; i++) {
			if (visit[i] == unvisited) {
				ans++;
				dfs(i);
			}
		}
		printf("%d\n", ans);
		if (t)printf("\n");
	}
}