#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
vector<ii>adj[205];
int dist[205];
int cost[205];
#define inf 2e9

int main(){
    #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
    #endif
     int n,cas=1;
     while(scanf("%d",&n)!=EOF){
         memset(adj,0,sizeof(adj));
          for(int i=1;i<=n;i++){
             scanf("%d",cost+i);
          }
         int m;
         scanf("%d",&m);
         for(int i=0,a,b;i<m;i++){
             scanf("%d %d ",&a,&b);
             adj[a].push_back(make_pair((cost[b]-cost[a])*(cost[b]-cost[a])*(cost[b]-cost[a]),b));
         }
         for(int i=1;i<=n;i++)dist[i]=inf;
         // bullman ford
         dist[1]=0;
         for(int i=0;i<n-1;i++){
           bool r=true;
            for(int j=0;j<n;j++){
               for(int k=0;k<(int)adj[j].size();k++){
                 ii a=adj[j][k];
                 if(dist[a.second]>dist[j]+a.first){
                  dist[a.second]=dist[j]+a.first;
                  r=false;
                 }
               }
            }
           if(r)break;            
         }
         for(int j=0;j<n;j++){
               for(int k=0;k<(int)adj[j].size();k++){
                 ii a=adj[j][k];
                 if(dist[a.second]+a.first<dist[j]&&dist[a.second]!=inf){
                  dist[j]=-inf;
                 }
               }
            }



         int q;
         printf("Set #%d\n",cas++);
         scanf("%d",&q);
         for(int i=0,a;i<q;i++){
           scanf("%d",&a);
           (dist[a]<3 ||dist[a]==inf)?printf("?\n"):printf("%d\n",dist[a]);
         }
     
     }
}