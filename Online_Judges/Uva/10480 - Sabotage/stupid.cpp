#include <bits/stdc++.h>
using namespace std;
const int N=55,s=1,t=2;

int res[N][N],p[N],f;
bool hoi[N],visit[N];
#define inf 1e9
vector<int>adj[N];
void augment(int v,int minEdge){
if(v==s){f=minEdge;return;}
else if(p[v]!=-1){
    augment(p[v],min(minEdge,res[p[v]][v]));
    res[p[v]][v]-=f,res[v][p[v]]+=f;
    adj[v].push_back(p[v]);
   
  }
}
int main(){
#ifndef ONLINE_JUDGE
     freopen("in.txt","r",stdin);
#endif
         int n,m;
         while(scanf("%d %d",&n,&m),(n||m)){
              memset(adj,0,sizeof(adj));
              memset(res,0,sizeof(res));
              for(int i=0,a,b,w;i<m;i++){
                 scanf("%d %d %d",&a,&b,&w);
                 adj[a].push_back(b);
                 adj[b].push_back(a);
                 res[a][b]=w;
                 res[b][a]=w;
              }
              while(1){
                  queue<int>q;
                  q.push(s);
                  memset(visit,0,sizeof(visit));
                  memset(p,-1,sizeof(p));
                  visit[s]=1;
                  while(!q.empty()){
                      int a=q.front();
                      q.pop();
                      if(a==t)break;
                      for(int i=0;i<(int)adj[a].size();i++){
                          int v=adj[a][i];
                          if(res[a][v]>0&&!visit[v]){
                           visit[v]=1,q.push(v),p[v]=a;
                          }                      
                      }
                     
                  }
                   augment(t,inf);
                      if(f==0)break;
                      f=0;
              }
                queue<int>q;
                  q.push(s);
                  memset(visit,0,sizeof(visit));
                  visit[s]=1;
                  while(!q.empty()){
                      int a=q.front();
                      q.pop();
                      for(int i=0;i<(int)adj[a].size();i++){
                          int v=adj[a][i];
                          if(res[a][v]>0&&!visit[v]){
                           visit[v]=1,q.push(v);
                          }                      
                      }
                     
                  }
                 for(int i=1;i<=n;i++){
                   if(visit[i]){
                      for(int j=0;j<adj[i].size();j++){
                       int v=adj[i][j];
                       if(!visit[v])printf("%d %d\n",i,v);
                      }
                   }
                 }
                 printf("\n");
         }
}
