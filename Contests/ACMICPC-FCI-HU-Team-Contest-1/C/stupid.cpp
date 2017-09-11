/*
*     make topological sort and numbers them by order(id) and then make dp to get max :)
*
*/

#include <bits/stdc++.h>
using namespace std;
int n,m,budget;
const int N=1005;
int dp[N][N],in[N],out[N],ord[N],cost[N],value[N],c[N],b[N],deg[N],id;
vector<int>adj[N];
void dfs(int u){
    ord[id]=u;
    in[u]=id;
    int x=id++;
    cost[x]=c[u];
    value[x]=b[u];
    for(int i=0;i<(int)adj[u].size();i++){
        int v=adj[u][i];
         dfs(v);
         cost[x]+=cost[in[v]];
         value[x]+=value[in[v]];
    }
    out[u]=id;
}
int solve(int i,int rem){
     if(i==id)return 0;
     int &ret=dp[i][rem];
     if(ret!=-1)return ret;
     ret=0;
     ret=solve(i+1,rem);
     if(rem>=cost[i])
        ret=max(ret,solve(out[ord[i]],rem-cost[i])+value[i]);
       return ret;
}
int main(){
    freopen("tree.in","r",stdin);
    memset(dp,-1,sizeof(dp));
    scanf("%d %d %d",&n,&m,&budget);
    for(int i=1;i<=n;i++){
       scanf("%d",c+i);
    }
    for(int i=1;i<=n;i++){
      scanf("%d",b+i);
    }
    for(int i=0,u,v;i<m;i++){
        scanf("%d %d",&u,&v);
        adj[u].push_back(v);
        deg[v]++;
    }
    for(int i=1;i<=n;i++){
       if(!deg[i])dfs(i);
    }
    printf("%d\n",solve(0,budget));
}
