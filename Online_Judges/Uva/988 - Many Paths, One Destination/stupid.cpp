#include <bits/stdc++.h>
using namespace std;
const int N=1005;
vector<int>adj[N];
bool visit[N];
int path[N];
vector<int>topsort;
       int n;

void dfs(int v){
    visit[v]=1;
    for(int i=0;i<(int)adj[v].size();i++){
        int u=adj[v][i];
        if(!visit[u])dfs(u);
    }
   topsort.push_back(v);
}
int solve(){
          int ans=0;
          topsort.clear();
          memset(path,0,sizeof(path));
          memset(visit,0,sizeof(visit));
          for(int i=0;i<n;i++){
               if(!visit[i])dfs(i);
          }
            path[0]=1;
            for(int i=topsort.size()-1;i>=0;i--){
                int u=topsort[i];
                for(int j=0;j<(int)adj[u].size();j++){
                   int v=adj[u][j];
                   path[v]+=path[u];
                }
               if(!adj[u].size())ans+=path[u];
            }
      return ans;
}
int main(){
#ifndef ONLINE_JUDGE
       freopen("in.txt","r",stdin);
#endif
        bool ok=false;
       while(scanf("%d",&n)!=EOF){
            int ans=0;
            memset(adj,0,sizeof(adj));
            for(int i=0,m,a;i<n;i++){
                scanf("%d",&m);
                while(m--){
                     scanf("%d",&a);
                     adj[i].push_back(a);
                }
            }
            
            if(ok)printf("\n");
            ok=true;
            printf("%d\n",solve());       
       }
}