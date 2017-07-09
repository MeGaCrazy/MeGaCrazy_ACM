#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vii;
vi ans, v;
vii edges;
int nodes[101], n, m;
// 1 for black ,,, 0 for white 
bool vaild(int curnode) {
	int length = edges[curnode].size();
	for (int i = 0; i < length; i++) {
		if (edges[curnode][i]==curnode||nodes[edges[curnode][i]])
			return false;
	}
	return true;
}
void coloring(int curnode) {
	if (v.size() > ans.size())
		ans = v;
	if (curnode == n + 1)
		return;
	int bestpossible = n+1 - curnode;

	if (bestpossible + v.size() <= ans.size())  // just for pruning 
		return;

	for (int i = curnode; i <= n; i++) {
		if (!nodes[i] && vaild(i)) {
			v.push_back(i);
			nodes[i] = 1;
			coloring(i + 1);
			v.pop_back();
			nodes[i] = 0;
		}
	}
}
int main() {
	int t, a, b;
	//freopen("in", "r", stdin);
	scanf("%d", &t);
	while (t--) {                                                                                 	
		memset(nodes, 0, sizeof(nodes));
		v.clear(), ans.clear();
		scanf("%d %d", &n, &m);
		edges.assign(n + 1, v);
		for (int i = 0; i < m; i++) {
			scanf("%d %d", &a, &b);
			edges[a].push_back(b);
			edges[b].push_back(a);
		}
		coloring(1);
		int length = ans.size();
		printf("%d\n", length);
		for (int i = 0; i < length; i++)
			printf(i == 0 ? "%d" : " %d", ans[i]);
		printf("\n");
	}
}