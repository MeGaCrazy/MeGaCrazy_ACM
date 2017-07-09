#include <bits/stdc++.h>
using namespace std;
int dist[1005];
typedef pair<int,int>ii;
vector<pair<int,int>  >adj[1005];
#define inf 2e9
int n,m;
bool check(){
          for(int j=0;j<n;j++){
            for(int k=0;k<(int)adj[j].size();k++){
              ii a=adj[j][k];
              if(dist[a.first]>a.second+dist[j])return 1;
            }
         
         }
         return 0;
}

int main(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r",stdin);
     #endif
     int t;
     scanf("%d",&t);
     while(t--){
      memset(adj,0,sizeof(adj));
      scanf("%d %d",&n,&m);
      for(int i=0;i<=n;i++)dist[i]=inf;

      for(int i=0,a,b,w;i<m;i++){
         scanf("%d %d %d",&a,&b,&w);
         adj[a].push_back(make_pair(b,w));
      }
      // bullman ford
      for(int i=0;i<n-1;i++){
         for(int j=0;j<n;j++){
            for(int k=0;k<(int)adj[j].size();k++){
              ii a=adj[j][k];
              dist[a.first]=min(dist[a.first],a.second+dist[j]);
            }         
         }
      }
     check()==0?printf("not possible\n"):printf("possible\n");
     
     }

}
