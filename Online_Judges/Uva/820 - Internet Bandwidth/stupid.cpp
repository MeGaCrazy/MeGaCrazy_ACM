#include <bits/stdc++.h>
using namespace std;
const int N=105;
int res[N][N];
bool visit[N];
int p[N];
int s,e,f;
vector<int>adj[N];
#define inf 1e9
inline void augment(int v, int mincost){
 if(v==s){f=mincost;return;}
 else if(p[v]!=-1){
    augment(p[v],min(mincost,res[p[v]][v]));
    res[p[v]][v]-=f,res[v][p[v]]+=f;
 }
}
int main(){
#ifndef ONLINE_JUDGE
     freopen("in.txt","r",stdin);
#endif
     int n,cas=1;
     while(scanf("%d",&n),n){
         int lines,ans=0;
         memset(adj,0,sizeof(adj));
         memset(res,0,sizeof(res));
         scanf("%d %d %d",&s,&e,&lines);
         for(int i=0,a,b,w;i<lines;i++){
            scanf("%d %d %d",&a,&b,&w);
            adj[a].push_back(b);
            adj[b].push_back(a);
            res[a][b]+=w;
            res[b][a]+=w;
         }
         // max flow
        while(1){
            queue<int>q;
            memset(visit,0,sizeof(visit));
            memset(p,-1,sizeof(p));
            visit[s]=1;
            q.push(s);
            while(!q.empty()){
                 int a=q.front();
                 q.pop();
                 for(int i=0;i<(int)adj[a].size();i++){
                    int v=adj[a][i];
                    if(res[a][v]>0&&!visit[v]){
                     visit[v]=1,q.push(v),p[v]=a;
                    }    
                 } 
            }
            augment(e,inf);
            if(f==0)break;
            ans+=f;
            f=0;        
        }
        printf("Network %d\nThe bandwidth is %d.\n\n",cas++,ans);
     }
}