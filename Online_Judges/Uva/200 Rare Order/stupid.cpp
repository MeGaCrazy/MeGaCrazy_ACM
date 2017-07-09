#include <stdio.h>
#include <string.h>
#include <queue>
#include <vector>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
vi ans;
#define Min(a,b)   ((a)<=(b))?(a):(b)
bool indegree[27];
void dfs(int c) {
	indegree[c] = 1;
	for (int i = 0; i<(int)adj[c].size(); i++) {
		if (indegree[adj[c][i]] == 0) {
			dfs(adj[c][i]);
		}
	}
	ans.push_back(c);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	char arr1[25] = {}, arr2[25] = {};
	adj.assign(27, vi());
	memset(indegree, 0, sizeof(indegree));
	scanf("%s", &arr1);
	while (scanf("%s", &arr2),strcmp(arr2,"#")!=0) {
		int sz = Min(strlen(arr1), strlen(arr2));
		for (int i = 0; i<sz; i++) {
			if (arr1[i] != arr2[i]) {
				adj[(arr1[i] - 'A')].push_back((arr2[i] - 'A'));
				break;
				//   indegree[(arr2[i]-'A')];
			}
		}
		strcpy(arr1, arr2);
	}
	//    solve();
	for (int i = 0; i<26; i++) {
		if (adj[i].size() != 0 && indegree[i] == 0) {
			dfs(i);
		}
	}
	for (int i = ans.size() - 1; i >= 0; i--) {
		printf("%c", (char)(ans[i] + 'A'));
	}
     printf("\n")	;
}