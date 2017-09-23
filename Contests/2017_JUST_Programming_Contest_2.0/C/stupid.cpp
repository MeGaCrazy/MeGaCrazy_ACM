/*
*     Idea : calculate the cost between to Vertex By there Common char and then add (bi direction edge)
*            Then make Dijkstra to Find The Answer  :)
*            Happy Solving :)
*/
#include <bits/stdc++.h>
using namespace std;
const int N=10005;
bool arr[N][27];
vector<pair<int,int> >adj[N];
int f[N];


int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
      int n,m;
      scanf("%d %d",&n,&m);
      string str;
      for(int i=1;i<=n;i++){
          cin>>str;
          for(int j=0;j<(int)str.size();j++){
             if(str[j] >='A'&&str[j]<='Z')str[j]=(char)(str[j]+32);
          //   cerr<<str[j]<<endl;
             arr[i][str[j]-'a']=1;
           }
      }
       for(int i=1;i<=m;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        int cost=0;
        for(int k=0;k<26;k++){
              if(arr[u][k]&&arr[v][k]){cost++;}
       }
        adj[u].push_back(make_pair(v,cost));
        adj[v].push_back(make_pair(u,cost));
      }
     
      for(int i=1;i<=n;i++){
         f[i]=(int)1e9;
      }
      int s,e;
      scanf("%d %d",&s,&e);

      priority_queue< pair<int,int> ,vector< pair<int,int> >,greater< pair<int,int >  > > pq;
      pq.push(make_pair(0,s));
      f[s]=0;
      while(!pq.empty()){
          int u=pq.top().second;
          int u_cost=pq.top().first;
          pq.pop();
          if(u==e){
           printf("%d",u_cost);
           return 0;
          }
          if(f[u] < u_cost)continue;
          for(int i=0;i<(int)adj[u].size();i++){
              int v=adj[u][i].first;
              int v_cost=adj[u][i].second;
              if(f[v] > u_cost + v_cost){
                f[v]=u_cost+v_cost;
                pq.push(make_pair(f[v],v));
              }
          } 
      }
}