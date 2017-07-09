#include <stdio.h>
#include <vector>
#include <queue>
#include <string.h>
#include <algorithm>
using namespace std;
vector<vector<int> >adj;
typedef vector<int>vi;
bool visit[2555];
int dis[2600];
void bfs(int s,int &cnt,int &ansi){
     cnt=0,ansi=0;
     vector<int>v(2600,0);
     queue<int>q;
     visit[s]=1;
     q.push(s);
     dis[s]=0;
     int large=0;
     while(!q.empty()){
      int u=q.front();
      q.pop();
       for(int i=0;i<(int)adj[u].size();i++){
         int a=adj[u][i];
         if(!visit[a]){
           visit[a]=1;
           dis[a]=dis[u]+1;
           v[dis[a]]++;
           if(dis[a]>large)large=dis[a];
           q.push(a);
         }
      
       }

  }                          
  for(int i=0;i<=(int)large;i++){
    if(v[i]>cnt){
      cnt=v[i];
      ansi=i;
    }  
  }
}
int main(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r",stdin);
     #endif
     int e;
     while(scanf("%d",&e)!=EOF){
          if(e==0)break;
         adj.assign(e,vi());
         for(int i=0,n;i<e;i++){
             scanf("%d",&n);
           for(int j=0,a;j<n;j++){
             scanf("%d",&a);
             adj[i].push_back(a);
           }
       }

       // queries
       int q;
       scanf("%d",&q);
       for(int i=0,a;i<q;i++){
          scanf("%d",&a);
          memset(visit,0,sizeof(visit));
          memset(dis,0,sizeof(dis));
          int cnt,ansi;
          bfs(a,cnt,ansi);
          if(cnt==0){printf("0\n");}
          else printf("%d %d\n",cnt,ansi);
       }
     }

}