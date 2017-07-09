#include <stdio.h>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
int color[205];
bool bfs(int v){
     queue<int>q;
     q.push(v);
     color[v]=1;
     while(!q.empty()){
       int a=q.front();
       q.pop();
       for(int i=0;i<(int)adj[a].size();i++){
            if(color[adj[a][i]]==color[a]){
             return false;
            }else if(color[adj[a][i]]==-1){
             color[adj[a][i]]=1-color[a];
             q.push(adj[a][i]);            
            }
        }          
    }
return true;
}
int main(){
    #ifndef ONLINE_JUDGE
          freopen("in.txt","r",stdin);
    #endif
        int n,l;
        while(scanf("%d",&n),n){
         scanf("%d",&l);
         memset(color,-1,sizeof(color));
         adj.assign(n,vi());
         int a,b;
         for(int i=0;i<l;i++){
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);                     
         }
        if(bfs(0)==true){
         printf("BICOLORABLE.\n");
        }else printf("NOT BICOLORABLE.\n");       
     }
}