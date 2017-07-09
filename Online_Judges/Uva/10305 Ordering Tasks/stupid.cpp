#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
vi ans;
bool visit[105];
void dfs(int c){
     visit[c]=1;
     for(int i=0;i<(int)adj[c].size();i++){
        if(visit[adj[c][i]]==0){
         dfs(adj[c][i]);
        }
     
     }

 ans.push_back(c);
}
int main(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r",stdin);
     #endif
     int n,m;
     while(scanf("%d %d",&n,&m),n&&m){
        int a,b;
        memset(visit,0,sizeof(visit));
        ans.clear();
        adj.assign(n+1,vi());
        for(int i=0;i<m;i++){
           scanf("%d %d",&a,&b);
           adj[a].push_back(b);
        }
       for(int i=1;i<=n;i++){
          if(visit[i]==false){
           dfs(i);
          }
       }
       for(int i=(int)ans.size()-1;i>=0;i--){
         printf("%d ",ans[i]);
       } printf("\n");
          
     }
}