#include <stdio.h>
#include <vector>
#include <string.h>
#include <queue>
using namespace std;
int color[305];
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
bool bfs(int v){
    queue<int>q;
    color[v]=1;
    q.push(v);
    while(!q.empty()){
       v=q.front();
       q.pop();
       for(int i=0;i<(int)adj[v].size();i++){
          if(color[adj[v][i]]==color[v])return false;
          else if(color[adj[v][i]]==-1){
           q.push(adj[v][i]);
           color[adj[v][i]]=1-color[v];
         }        
      }
   }
   return true;
}
int main(){
   #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
   #endif
   int n;
   while(scanf("%d",&n),n){
       int a,b;
       memset(color,-1,sizeof(color));
       adj.assign(n+1,vi());
       while(scanf("%d %d",&a,&b),a&&b){
           adj[a].push_back(b);
           adj[b].push_back(a);       
       }
       bool ans;
       for(int i=1;i<=n;i++){
         if(color[i]==-1){
            ans=bfs(i);
           if(ans==false)break;
         }  
     }
     ans==true?printf("YES\n"):printf("NO\n");
                                                 
   }
}