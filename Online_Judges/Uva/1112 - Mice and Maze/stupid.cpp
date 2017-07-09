#include <stdio.h>
#include <vector>
#include <utility>
#include <queue>
#define inf 2e9
using namespace std;
typedef pair<int,int>ii;
typedef vector<pair<int,int> >vi;
vector< vi >adj;
int dis[105];
int n,ext,tim,m;
int solve(int sr){
  priority_queue<pair<int,int>,vector< pair<int,int> >,greater<pair<int,int> > >q;
  q.push(make_pair(0,sr));
  dis[sr]=0;
  while(!q.empty()){
   int  from=q.top().second;
   int  cost=q.top().first;
    q.pop();
    if(cost>dis[from]||dis[from]>tim)continue;
    for(int i=0;i<(int)adj[from].size();i++){
      int to=adj[from][i].first;
      int t=adj[from][i].second;
      if(dis[from]+cost<dis[to]){
       dis[to]=dis[from]+t;
       q.push(make_pair(dis[to],to));
      }
    
    
    }
  
  
  }
  int ans=0;
  for(int i=1;i<=n;i++){
    if(dis[i]<=tim) {
          ans++;
    }
  
  }   
  return ans;

}
inline void clr(int n){
  for(int i=0;i<=n;i++){
          dis[i]=inf;
 }
}
int main(){
    #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
    #endif
    int t;
    scanf("%d",&t);
    while(t--){
         scanf("%d %d %d %d",&n,&ext,&tim,&m);
         adj.clear();
         adj.assign(n+1,vi());
         clr(n);
         for(int i=0,a,b,c;i<m;i++){
            scanf("%d %d %d",&a,&b,&c);
            adj[a].push_back(make_pair(b,c));
         }

         printf("%d\n",solve(ext));
        if(t)printf("\n");
    }
}