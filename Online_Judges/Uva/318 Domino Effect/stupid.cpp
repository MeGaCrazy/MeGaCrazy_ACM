#include <stdio.h>
#include <vector>
#include <string.h>
#include <utility>
#include <queue>
using namespace std;
typedef pair<int,int>ii;
typedef vector<ii>vii;
typedef vector<vii>vvii;
vvii adj;
ii ans;
double anstime;
bool flags[505];
/*
void dfs(int c){
     flags[c]=1;
     for(int i=0;i<(int)adj[c].size();i++){
        ii p=adj[c][i];
        if(flags[p.first]==0){
           anstime+=p.second;
           ans=make_pair(c,0);
         }else {
           anstime=(anstime+p.second)/2.00;
           ans=make_pair(c,p.first); 
         }
       dfs(adj[c][i].first);
     }
}
*/
void bfs(int c) {
    flags[c]=1;
    queue<int>q;
    q.push(c);
    while(!q.empty()){
      c=q.front();
      q.pop();
      for(int i=0;i<(int)adj[c].size();i++){
        ii p=adj[c][i];
        if(flags[p.first]==0){
           anstime+=p.second;
           ans=make_pair(c,0);
           q.push(p.first);
           flags[p.first]=1;
         }else {
           anstime=(anstime+p.second)/2.00;
           ans=make_pair(c,p.first); 
         }
     }
    
   }
}
int main(){
       #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
       #endif
       int m,n,a,b,we,cas=1;
       while(scanf("%d %d",&n,&m),n&&m){
         adj.assign(n+1,vii());
         for(int i=0;i<m;i++){
             scanf("%d %d %d",&a,&b,&we);
             adj[a].push_back(make_pair(b,we));
         }
          memset(flags,0,sizeof(flags));
          anstime=0.00;
          bfs(1);
          printf("System #%d\nThe last domino falls after %.1f seconds,",cas++,anstime);
          if(ans.second==0){
            printf(" at key domino %d.\n",ans.first);
          }else {
           printf(" between key dominoes %d and %d.\n",ans.first,ans.second);
          }
  }
}