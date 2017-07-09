#include <stdio.h>
#include <vector>
#include <string.h>
#include <queue>
#include <algorithm>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
int color[205];
bool ok;
int bfs(int v){
    int ret=1,ret2=0;
    color[v]=1;
    queue<int>q;
    q.push(v);
    while(!q.empty()&&!ok){
     int a=q.front();
     q.pop();
     for(int i=0;i<(int)adj[a].size();i++){
        if(color[adj[a][i]]==-1){
          color[adj[a][i]]=1-color[a];
          q.push(adj[a][i]);
          if(color[adj[a][i]]==1)ret++;else ret2++;
        }else if(color[adj[a][i]]==color[a]){
           ok=true;        
           break;
        }
     }    
  }

 return (ret2==0)?ret:min(ret2,ret);
}
int main(){
   #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
   #endif

    int t,n,e;
    scanf("%d",&t);
    while(t--){
       scanf("%d %d",&n,&e);
       memset(color,-1,sizeof(color));
       adj.assign(n,vi());
       for(int i=0;i<e;i++){
           int a,b;
           scanf("%d %d",&a,&b);
           adj[a].push_back(b);
           adj[b].push_back(a);       
       }
      int ans=0;ok=false;
      for(int i=0;i<n;i++){
        if(color[i]==-1&&!ok){
         ans+=bfs(i);
        }	
      }
     if(!ok)printf("%d\n",ans);
     else printf("-1\n");
  }
}
