#include <bits/stdc++.h>
using namespace std;
const int s = 0, t = 11, MaxN = 165;
int res[MaxN][MaxN], f;
int p[MaxN];
vector<int>adj[MaxN];
bool visit[MaxN];
char prans[11];
int parent;
int tarans;
string str;
#define inf 1e9
void get() {
	char app[3] = {}, comp[20] = {};
	istringstream in(str);
	in >> app;
	in >> comp;
	int appnum = (app[0] - 'A') + 26;
	int cap = (app[1] - '0');
	tarans += cap;
	int next = appnum + 26;
	adj[s].push_back(appnum);
	res[s][appnum] = inf;
	adj[appnum].push_back(next);
	res[appnum][next] = cap;
	int num = cap;
	for (int i = 0; i<(int)strlen(comp); i++) {
		if (comp[i] == ';')continue;
		adj[next].push_back((comp[i] - '0') + 1);
		adj[(comp[i] - '0') + 1].push_back(t);
		res[next][(comp[i] - '0') + 1] = 1;
		res[(comp[i] - '0') + 1][t] = 1;
	}
}
void augment(int v, int minedge) {
        if(p[v]==s){parent=v-26;}
	if (v == s) { f = minedge; return; }
	else if (p[v] != -1) {
		augment(p[v], min(minedge, res[p[v]][v]));
		res[p[v]][v] -= f, res[v][p[v]] += f;
		adj[v].push_back(p[v]);
		if(v>=1&&v<=10)prans[v]=parent;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif

	while (getline(cin,str),!str.empty()) {
		int ans = 0;
		tarans = 0;
		memset(adj, 0, sizeof(adj));
		for (int i = 1; i <= 10; i++) {
			prans[i]= '_';
		}
		memset(res, 0, sizeof(res));
		
		tarans = 0;
		get();
		while (getline(cin, str), !str.empty()) {
			get();
			str = "";
		}
		
		
		while (1) {
			queue<int>q;
			q.push(s);
			memset(visit, 0, sizeof(visit));
			visit[0] = 1;
			memset(p, -1, sizeof(p));
			while (!q.empty()) {
				int a = q.front();
				q.pop();
				if (a == t)break;
				for (int i = 0; i<(int)adj[a].size(); i++) {
					int v = adj[a][i];
					if (res[a][v]>0&&!visit[v]) {
						 q.push(v), p[v] = a, visit[v] = 1;
					}
				}
			}
			augment(t, inf);
			if (f == 0)break;
			ans += f;
			f = 0;
		}

		if (ans == tarans) {
			for (int i = 1; i <= 10; i++) {
				if(prans[i]!='_')
				printf("%c", 'A'+prans[i]);
				else printf("%c", prans[i]);
			}
			printf("\n");

		}
		else {
			printf("!\n");
		}
		str = "";
	}
}