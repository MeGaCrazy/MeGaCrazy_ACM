#include <stdio.h>
#include <vector>
#include <string.h>
#include <queue>
using namespace std;
vector<int>button;
bool visit[10005];
int dis[10005];
int bfs(int so,int tar){
    queue<int>q;
    q.push(so);
    visit[so]=1;
    dis[so]=0;
    while(!q.empty()){
      int u=q.front()%10000;
      q.pop();
      for(int i=0;i<(int)button.size();i++){
         int a=(button[i]+u)%10000;
         if(!visit[a]){
              q.push(a);
              visit[a]=1;
              dis[a]=dis[u]+1;
              if(a==tar)return dis[a];
         }
      
      }
    }
   return -1;

}
int main(){
      #ifndef ONLINE_JUDGE
           freopen("in.txt","r",stdin);
      #endif
   int cur,code,n,cas=1;
   while(scanf("%d %d %d",&cur,&code,&n),(cur||code||n)){
      printf("Case %d: ",cas++);
      button.clear();
      memset(visit,0,sizeof(visit));
      for(int i=0,a;i<n;i++){
        scanf("%d",&a);
        button.push_back(a);
      }
       int ans=bfs(cur,code);
       if(ans==-1)printf("Permanently Locked\n");
       else printf("%d\n",ans);
   }
}