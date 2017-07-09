#include <bits/stdc++.h>
using namespace std;
const int N=255,s=0,t=1;
int res[N][N],p[N];
bool visit[N];
vector<int>adj[N];
int f;
#define inf 1e9
void augment(int v,int minedge){
if(v==s){f=minedge;return;}
else if(p[v]!=-1){
      augment(p[v],min(minedge,res[p[v]][v]));
      res[p[v]][v]-=f,res[v][p[v]]+=f;
      adj[v].push_back(p[v]);
     }
}
int main(){
#ifndef ONLINE_JUDGE
     freopen("in.txt","r",stdin);
#endif
          int n;
          while(scanf("%d",&n)!=EOF){
             memset(adj,0,sizeof(adj));
             memset(res,0,sizeof(res));              
              for(int i=2,a;i<n+2;i++){
                  scanf("%d",&a);
                  adj[i].push_back(i+(n+2));
                  res[i][i+(n+2)]+=a;
              }
           int m;
           scanf("%d",&m);
           for(int i=0,a,b,w;i<m;i++){
               scanf("%d %d %d",&a,&b,&w);
               adj[(a+1)+(n+2)].push_back((b+1));
               res[(a+1)+(n+2)][(b+1)]+=w;
           }
           int b,d;
           scanf("%d %d",&b,&d);
           for(int i=0,a;i<b;i++){
               scanf("%d",&a);
               adj[s].push_back(a+1);
               res[s][a+1]=inf;
           }
            for(int i=0,a;i<d;i++){
               scanf("%d",&a);
               adj[a+1+(n+2)].push_back(t);
               res[a+1+(n+2)][t]=inf;
            }
            // max flow
            int ans=0;
            while(1){
               queue<int>q;
               memset(visit,0,sizeof(visit));
               memset(p,-1,sizeof(p));
               visit[s]=1;
               q.push(s);
               while(!q.empty()){
                    int a=q.front();
                    q.pop();
                    if(a==t)break;
                    for(int i=0;i<(int)adj[a].size();i++){
                        int v=adj[a][i];
                        if(res[a][v]>0&&!visit[v]){
                         q.push(v),visit[v]=1,p[v]=a;
                        }                    
                    }
                 
               }
               augment(t,inf);
               ans+=f;
               if(f==0)break;
               f=0;

            }
              printf("%d\n",ans);
          }
}