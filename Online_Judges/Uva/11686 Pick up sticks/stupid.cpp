#include <stdio.h>
#include <vector>
#include <string.h>
#include <queue>
#include <functional>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
vi ans;
int n,m;
int degree[1234567];
void solve(){
     queue<int>pq;
     for(int i=1;i<=n;i++){
        if(degree[i]==0){pq.push(i);
       }
     }
     while(!pq.empty()){
        int a=pq.front();
        ans.push_back(a);
        pq.pop();
        for(int i=0;i<(int)adj[a].size();i++){
          degree[adj[a][i]]--;
          if(degree[adj[a][i]]==0)pq.push(adj[a][i]);        
        }
     }
}
int main(){
    #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
    #endif

    while(scanf("%d%d",&n,&m),n&&m){
      adj.assign(n+1,vi());
      ans.clear();
      memset(degree,0,sizeof(degree));
      int a,b;
      for(int i=0;i<m;i++){
          scanf("%d %d",&a,&b);
           degree[b]++;
          adj[a].push_back(b);      
      }
     solve();
     if(ans.size()==n){
     for(int i=0;i<(int)ans.size();i++){
       printf("%d\n",ans[i]);
      }
      }else{
       printf("IMPOSSIBLE\n");
      }                        
   }
}
