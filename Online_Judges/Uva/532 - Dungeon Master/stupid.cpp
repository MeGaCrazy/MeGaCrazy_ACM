#include <stdio.h>
#include <vector>
#include <queue>
#include <string.h>
#include <utility>
using namespace std;
const int x[]={0,0,-1,1,0,0};
const int y[]={-1,1,0,0,0,0};
const int z[]={0,0,0,0,-1,1};
bool visit[35][35][35];
int dis[35][35][35];
int Z,X,Y;
inline bool check(int nz,int nx,int ny){
 if(nz<0||nx<0||ny<0||nz>=Z||ny>=Y||nx>=X||visit[nz][nx][ny])return false;
 return true;
}
int bfs(int zst,int xst,int yst,int zext,int xext,int yext){
       dis[zst][xst][yst]=0;
       queue<pair<int,pair<int,int> > >q;
       visit[zst][xst][yst]=1;
       q.push(make_pair(zst,make_pair(xst,yst)));
       while(!q.empty()){
         pair<int,pair<int,int> >u=q.front();
         q.pop();
         for(int i=0;i<6;i++){
          int newz=u.first+z[i];
          int newx=u.second.first+x[i];
          int newy=u.second.second+y[i];
          if(check(newz,newx,newy)){
           dis[newz][newx][newy]=dis[u.first][u.second.first][u.second.second]+1;
           if(newz==zext&&newx==xext&&newy==yext)return dis[newz][newx][newy];
           visit[newz][newx][newy]=1;
           q.push(make_pair(newz,make_pair(newx,newy)));
          }
         
       }
     }
     return -1;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif

      while(scanf("%d %d %d",&Z,&X,&Y),Z){
         int zst,xst,yst,zext,xext,yext;
         memset(visit,0,sizeof(visit));
         memset(dis,0,sizeof(dis));
         char str[55]={};
         for(int i=0;i<Z;i++){
            for(int j=0;j<X;j++){
               scanf("%s",&str);
               for(int k=0;k<Y;k++){
                if(str[k]=='S'){
                  zst=i;
                  xst=j;
                  yst=k;
                }else if(str[k]=='E'){
                  zext=i;
                  xext=j;
                  yext=k;
                }else if(str[k]=='#'){
                 visit[i][j][k]=1;
                }
               }


            }
         }
          int ans=bfs(zst,xst,yst,zext,xext,yext);
          if(ans==-1)printf("Trapped!\n");
          else printf("Escaped in %d minute(s).\n",ans);
      }
}