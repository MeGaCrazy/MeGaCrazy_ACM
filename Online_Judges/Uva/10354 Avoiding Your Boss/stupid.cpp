#include <bits/stdc++.h>
using namespace std;
const int N=105;
int adj[N][N],adj2[N][N];
bool visit[N];
#define inf 1e9

int main(){
#ifndef ONLINE_JUDGE           
    freopen("in.txt","r",stdin);
#endif
     int n,r,bosshome,office,home,market;
     while(scanf("%d %d %d %d %d %d",&n,&r,&bosshome,&office,&home,&market)!=EOF){
         for(int i=0;i<=n;i++){
               for(int j=0;j<=n;j++){
                    adj[i][j]=adj2[i][j]=inf;
                    adj[i][i]=adj2[i][i]=0;
               }
         }
         for(int i=0,a,b,cost;i<r;i++){
              scanf("%d %d %d",&a,&b,&cost);
              adj[a][b]=adj[b][a]=cost;
              adj2[a][b]=adj2[b][a]=cost;
         }
         for(int k=1;k<=n;k++){
              for(int i=1;i<=n;i++){
                   for(int j=1;j<=n;j++){
                        if(adj[i][j]>adj[i][k]+adj[k][j]){
                          adj[i][j]=adj[i][k]+adj[k][j];               
                        }
                   }
              }
         }
         memset(visit,0,sizeof(visit));
         for(int k=1;k<=n;k++){
            if(adj[bosshome][office]==adj[bosshome][k]+adj[k][office]){
             visit[k]=1;
            }
         }
         for(int k=1;k<=n;k++){
              if(visit[k]==0)
              for(int i=1;i<=n;i++){
                   if(visit[i]==0)
                   for(int j=1;j<=n;j++){
                        if(visit[j]==0)
                        if(adj2[i][j]>adj2[i][k]+adj2[k][j]){
                          adj2[i][j]=adj2[i][k]+adj2[k][j];
                        }
                   }
              }
         }
        if(adj2[home][market]!=inf&&visit[home]==0&&visit[market]==0){
           printf("%d\n",adj2[home][market]);
        }else{
           printf("MISSION IMPOSSIBLE.\n");
        }


        
     }
}