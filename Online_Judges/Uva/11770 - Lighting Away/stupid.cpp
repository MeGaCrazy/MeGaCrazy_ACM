#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
vi topsort;
int visit[10005];
void dfs(int v){
    visit[v]=1;
    for(int i=0;i<(int)adj[v].size();i++){
       if(visit[adj[v][i]]==-1)dfs(adj[v][i]);
    }
 topsort.push_back(v);
}
void dfs2(int v){
    visit[v]=1;
    for(int i=0;i<(int)adj[v].size();i++){
       if(visit[adj[v][i]]==-1)dfs(adj[v][i]);
    }
}
int  main(){
      #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
      #endif
       int n,m,t,cas=1;
       scanf("%d",&t);
       while(t--){
         scanf("%d %d",&n,&m);
         adj.assign(n+1,vi());
         topsort.clear();
         memset(visit,-1,sizeof(visit));
         int a,b;
         for(int i=0;i<m;i++){
          scanf("%d %d",&a,&b);
          adj[a].push_back(b);
         }
        /// for toploy sort// 
        for(int i=1;i<=n;i++){
         if(visit[i]==-1){
            dfs(i);
         }   
      }
      /// cnt connect comp;
      memset(visit,-1,sizeof(visit));
      int ans=0;
      for(int i=topsort.size()-1;i>=0;i--){
       if(visit[topsort[i]]==-1){
          dfs(topsort[i]);
          ans++;
       }   
    }  
  printf("Case %d: %d\n",cas++,ans);     
 }
}