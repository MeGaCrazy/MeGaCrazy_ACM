#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
#define inf 2e9
vector<ii>adj[20005];
int dis[20005];
void solve(int st,int en){
    priority_queue<ii,vector<ii>,greater<ii> >pq;
    pq.push(make_pair(0,st));
    dis[st]=0;
    while(!pq.empty()){
      int from=pq.top().second;
      int cost=pq.top().first;
      pq.pop();
      if(cost>dis[from])continue;
      for(int i=0;i<(int)adj[from].size();i++){
        int to=adj[from][i].first;
        int cost_to=adj[from][i].second;
        if(cost_to+dis[from]<dis[to]){
          dis[to]=cost_to+dis[from];
          pq.push(make_pair(dis[to],to));
        }
      
      }
    
    }
}
void inline clr(int n){
 for(int i=0;i<n;i++)dis[i]=inf;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
    int t,cas=1;
    scanf("%d",&t);
    while(t--){
      int n,m,s,e;
      scanf("%d %d %d %d",&n,&m,&s,&e);
      memset(adj,0,sizeof(adj));
      for(int i=0,a,b,w;i<m;i++){
       scanf("%d %d %d",&a,&b,&w);
       adj[a].push_back({b,w});
       adj[b].push_back({a,w});
      }
      clr(n);
      solve(s,e);
      printf("Case #%d: ",cas++);
      dis[e]!=inf?printf("%d\n",dis[e]):printf("unreachable\n");
    }

}