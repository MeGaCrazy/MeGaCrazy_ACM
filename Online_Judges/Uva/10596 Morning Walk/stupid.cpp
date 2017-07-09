#include <bits/stdc++.h>
using namespace std;
const int N=205;
int n,r;
bool adj[N][N],vis[N];
int degree[N];
vector<int>tour;
void dfs(int v){
    vis[v]=1;
    for(int i=0;i<n;i++){
       if(adj[v][i]&&!vis[i]){
           dfs(i);
       }
    }
}
int main(){
//     freopen("in","r",stdin);
     while(scanf("%d %d",&n,&r)==2){
           memset(adj,0,sizeof(adj));
           memset(degree,0,sizeof(degree));
           memset(vis,1,sizeof(vis));  	
          for(int i=0,a,b;i<r;i++){
              scanf("%d %d",&a,&b);
              adj[a][b]++,adj[b][a]++;
              degree[a]++,degree[b]++;
              vis[a]=0,vis[b]=0;
          }
          bool ok=true;
          for(int i=0;i<n;i++){
              if(degree[i]&1){ok=false;break;}
          }
          if(!ok){
            printf("Not Possible\n");
          }else{
             int cnt=0;
             for(int i=0;i<n;i++){
                 if(!vis[i]){dfs(i);cnt++;}
                 if(cnt>1)break;
             }
             if(cnt==1)printf("Possible\n");
             else printf("Not Possible\n");
          
         }
     
     }



}    