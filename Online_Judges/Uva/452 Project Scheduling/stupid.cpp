#include <bits/stdc++.h>
using namespace std;
const int N = 30;
vector<int>adj[N];
vector<int>s;
bool  visit[N];
int dis[N];
int cost[N];
#define inf 1e9
void dfs(int v) {
	visit[v] = 1;
	for (int i = 0; i<adj[v].size(); i++) {
		int u = adj[v][i];
		if (!visit[u])dfs(u);
	}
	if (adj[v].size())
		s.push_back(v);
}
int solve() {
	for (int i = 0; i<26; i++)dis[i] = -inf;
	int ans = 0;
	for(int i=0;i<(int)s.size();i++){
		int v = s[i];
		dis[v]=0;
             for (int i = 0; i<adj[v].size(); i++) {
				int u = adj[v][i];
				dis[v]=max(dis[v],dis[u]);
				dis[v]+=cost[u];
				ans=max(dis[v],ans);
			}
	
	}
	return ans;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	int t;
	scanf("%d", &t);
	getchar();
	getchar();
	//getchar();
	while (t--) {
		s.clear();
		memset(adj, 0, sizeof(adj));
		memset(visit, 0, sizeof(visit));
		memset(cost, 0, sizeof(cost));
		char str[200] = {};
		while (cin.getline(str, 200), strlen(str)) {
			char courses[200] = {}, mycoures;
			int _time = 0;
			sscanf(str, " %c %d %s", &mycoures, &_time, &courses);
			int v = mycoures - 'A';
			cost[v] = _time;
			for (int i = 0; i<(int)strlen(courses); i++) {
				int u = courses[i] - 'A';
				adj[v].push_back(u);
			}
			memset(str, 0, sizeof(str));
		}
		for (int i = 0; i<26; i++) {
			if (!visit[i])
				dfs(i);
		}
		printf("%d\n", solve());
		if(t)printf("\n");
	}

}



