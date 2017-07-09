#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
struct edge{
 int from;
 int to;
 int cost;
};

int dis[105];
vector<edge>adj;
int n;
#define inf 2e9
bool solve(){
 for(int i=1;i<=n-1;i++){
        bool r=true;
           for(int j=0;j<(int)adj.size();j++){
              edge a=adj[j];
              if(dis[a.to]<dis[a.from]+a.cost){
               dis[a.to]=dis[a.from]+a.cost;
               r=false ;
              }
           }
           if(r)return 0;
           if(dis[n]!=-inf)return 1;
        }
        return dis[n]!=-inf;
}
int main(){
      #ifndef ONLINE_JUDGE
           freopen("in.txt","r",stdin);
      #endif
       while(scanf("%d",&n),n!=-1){
          adj.clear();
          for(int i=1,a;i<=n;i++){
            int cost,m;
            scanf("%d %d",&cost,&m);
            while(m--){
            scanf("%d",&a);
             adj.push_back({i,a,cost});
            }
          }
        for(int i=0;i<=n;i++)dis[i]=-inf;
         dis[1]=100;
         solve()==0?printf("hopeless\n"):printf("winnable\n");
       }
}