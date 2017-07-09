#include <stdio.h>
#include <vector>
#include <string.h>
#include <utility>      
#include <queue>
using namespace std;
bool visit[1005][1005];
int dis[1005][1005];
int x[]={0,1,0,-1};
int y[]={1,0,-1,0};
int r,c;
bool  check(int a,int b){
   if(a<0||b<0||a>=r||b>=c||visit[a][b])return false;
   return true;
}
int bfs(int a,int b,int disa,int disb){
    visit[a][b]=1;
    queue<pair<int,int> >q;
    q.push(make_pair(a,b));
    dis[a][b]=0;
    while(!q.empty()){
     pair<int,int>u=q.front();
     q.pop();
     int a1=u.first,b1=u.second;
     // choice 1
     if(check(a1+x[0],b1+y[0])){
       int t1=a1+x[0],t2=b1+y[0];
       q.push(make_pair(t1,t2));
       visit[t1][t2]=1;
       dis[t1][t2]=dis[a1][b1]+1;
       if(t1==disa&&t2==disb)return dis[t1][t2];
     }
     // choice 2
      if(check(a1+x[1],b1+y[1])){
      int t1=a1+x[1],t2=b1+y[1];
       q.push(make_pair(t1,t2));
       visit[t1][t2]=1;
       dis[t1][t2]=dis[a1][b1]+1;
       if(t1==disa&&t2==disb)return dis[t1][t2];
     }
     // choice 3
      if(check(a1+x[2],b1+y[2])){
       int t1=a1+x[2],t2=b1+y[2];
       q.push(make_pair(t1,t2));
       visit[t1][t2]=1;
       dis[t1][t2]=dis[a1][b1]+1;
       if(t1==disa&&t2==disb)return dis[t1][t2];
     
     
     }
     // choice 4
      if(check(a1+x[3],b1+y[3])){
      int t1=a1+x[3],t2=b1+y[3];
       q.push(make_pair(t1,t2));
        visit[t1][t2]=1;
       dis[t1][t2]=dis[a1][b1]+1;
       if(t1==disa&&t2==disb)return dis[t1][t2];

     }
    }
  return 0;
}
int main(){
   #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
   #endif
       while(scanf("%d %d",&r,&c),(r||c)){
        memset(visit,0,sizeof(visit));
        memset(dis,0,sizeof(dis));
        int n;
        scanf("%d",&n);
        for(int i=0,a,sz;i<n;i++){
           scanf("%d %d",&a,&sz);
           for(int i=0,b;i<sz;i++){
            scanf("%d",&b);
            visit[a][b]=1;
           }
        }
        // start queries
        int a,b,disa,disb;
        scanf("%d %d %d %d",&a,&b,&disa,&disb);
        if(a==disa&&b==disb)printf("0\n");
        else  printf("%d\n",bfs(a,b,disa,disb));
       
       }
}