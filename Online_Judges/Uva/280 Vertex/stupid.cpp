#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
int n,cnt=0;
bool flags[101];
void dfs(int c) {
	for (int i = 0; i<(int)adj[c].size(); i++) {
		if (flags[adj[c][i]] == 0) {
                        flags[adj[c][i]] = 1;
                         cnt++;
			dfs(adj[c][i]);
                        
		}
	}
}
void printans(int n) {
   if(n==0)
       return;
   else{
      printans(n-1);
      if(flags[n]==0){
         printf(" %d",n);
       } 
    }
}
int main() {
        #ifndef ONLINE_JUDGE
	freopen("in.txt", "rt", stdin);
        #endif
	while (scanf("%d", &n), n != 0) {
                vvi adj(n+1);
		int vert, edge;
		while (scanf("%d", &vert), vert != 0) {
			while (scanf("%d", &edge), edge != 0) {
				adj[vert].push_back(edge);
			}
		}
		int queries, stvert;
		scanf("%d", &queries);
		while (queries--) {
			scanf("%d", &stvert);
			memset(flags, 0, sizeof(flags));
			cnt=0;
			dfs(stvert);
                	printf("%d",n-cnt);
			printans(n);
			printf("\n");
		}

	}

}