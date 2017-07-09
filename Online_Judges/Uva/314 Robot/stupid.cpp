#include <stdio.h>
#include <vector>
#include <string.h>
#include <queue>
#include <utility>
using namespace std;
int x[]={0,-1,0,1};
int y[]={1,0,-1,0};
bool visit[55][55];
int dis[55][55];
int r,c;
bool check(int a,int b){
   if(a<0||b<0||a>=r||b>=c||visit[a][b])return false;
   return true;
}
int bfs(int a,int b,int disa,int disb,int choice){
     dis[a][b]=0;
    queue<pair<int,int> >q;
    q.push(make_pair(a,b));
    visit[a][b]=1;
    while(!q.empty()){
      pair<int,int>u=q.front();
      q.pop();
     int a1=u.first,b1=u.second;
     // choice 1
     if(check(a1+x[choice],b1+y[choice])){
       int t1=a1+x[choice],t2=b1+y[choice];
       q.push(make_pair(t1,t2));
       visit[t1][t2]=1;
       dis[t1][t2]=dis[a1][b1]+1;
       if(t1==disa&&t2==disb)return dis[t1][t2];
     }else choice=(choice+1)%4;
    }
}


int main(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r",stdin);
     #endif
         while(scanf("%d %d",&r,&c),(r||c)){
          memset(visit,0,sizeof(visit));
             for(int i=0;i<r;i++){
               for(int j=0;j<c;j++){
                scanf("%d",&visit[i][c]);
               }
             }
             // queries;
             int a,b,disa,disb;
             char s[50]={};
             scanf("%d %d %d %d %s",&a,&b,&disa,&disb,&s);
             int choice=0;
             if(s=="north")choice=0;
             else if(s=="west")choice=1;
             else if(s=="south")choice=2;
             else choice=3;
              printf("%d\n",bfs(a,b,disa,disb,choice));

         
         
         
         
         
         
         
         
         
         }










}
