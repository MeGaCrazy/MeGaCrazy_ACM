#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
bool visit[123456];
vi ans;
void dfs(int v){
     visit[v]=1;
     for(int i=0;i<(int)adj[v].size();i++){
       int a=adj[v][i];
       if(!visit[a])dfs(a);     
     }
   ans.push_back(v);
}
int main(){
  #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
  #endif
     int t;
     scanf("%d",&t);
     while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        adj.assign(n+1,vi());
        ans.clear();
        memset(visit,0,sizeof(visit));
        for(int i=0,a,b;i<m;i++){
          scanf("%d %d",&a,&b);
          adj[a].push_back(b);
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(visit[i]==0){
             dfs(i);
            }
        }
       memset(visit,0,sizeof(visit));
       for(int i=ans.size()-1;i>=0;i--){
         if(visit[ans[i]]==0){
            dfs(ans[i]);
            cnt++;
         }       
      }
     printf("%d\n",cnt);
     
   }

}