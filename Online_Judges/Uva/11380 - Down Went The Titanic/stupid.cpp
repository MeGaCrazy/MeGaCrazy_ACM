#include <bits/stdc++.h>
using namespace std;
const int N=1805,s=0,t=1802;
int res[N][N],p[N];
char arr[35][35];
vector<int>adj[N];
bool visit[N];
int x,y,P,f;
bool ok;
int xx[]={0,0,-1,1};
int yy[]={1,-1,0,0};
#define inf 1e9
map<pair<int,int>,int>mp;
bool check(int i,int j){
 if(i>=x||i<0||j>=y||j<0||arr[i][j]=='~')return 0;
  return 1;
}      
void link(int i,int j){
   if(check(i,j)){
   for(int k=0;k<4;k++){
      int a=i+xx[k],b=j+yy[k];
      if(check(a,b)){
        if(arr[i][j]=='*'){
        adj[mp[make_pair(i,j)]].push_back(mp[make_pair(a,b)]);
        res[mp[make_pair(i,j)]][mp[make_pair(a,b)]]=inf;
        }else{
          adj[mp[make_pair(i,j)]+(x*y+1)].push_back(mp[make_pair(a,b)]);
          res[mp[make_pair(i,j)]+(x*y+1)][mp[make_pair(a,b)]]=inf;
        }
      }
   }
 }
}
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
      
      while(scanf("%d %d %d",&x,&y,&P)!=EOF){
            int nodes=1;  
            mp.clear();
            int dip=x*y+1;
            memset(adj,0,sizeof(adj));
            memset(res,0,sizeof(res));
            for(int i=0;i<x;i++){
               for(int j=0;j<y;j++){
                  scanf(" %c",&arr[i][j]);
                  mp[make_pair(i,j)]=nodes;
                  if(arr[i][j]=='*'){
                   adj[s].push_back(nodes);
                   res[s][nodes]=1;
                  }else if(arr[i][j]=='#'){
                   adj[nodes].push_back(nodes+dip);
                   res[nodes][nodes+dip]=P;
                   adj[nodes+dip].push_back(t);
                   adj[nodes+dip][t]=inf;
                  }else if(arr[i][j]=='.'){
                   adj[nodes].push_back(nodes+dip);
                   res[nodes][nodes+dip]=1;
                  }else if(arr[i][j]=='@'){
                    adj[nodes].push_back(nodes+dip);
                    res[nodes][nodes+dip]=inf;
                  }
               }
               nodes++;     
            }
            for(int i=0;i<x;i++){
               for(int j=0;j<y;j++){
                  link(i,j);
               }            
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
                     visit[v]=1,q.push(v),p[v]=a;
                    }
                  }

              }

             augment(t,inf);
             ans+=f;
             if(!f)break;
             f=0;
            }
            printf("%d\n",ans);
      }
}