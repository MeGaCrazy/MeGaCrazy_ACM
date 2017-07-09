#include <bits/stdc++.h>
using namespace std;
const int N=80;
long long cost[N][N],dp[N][N][7][3];
bool visit[N][N][7][3];
int n,k;
int xx[]={0,0,1};
int yy[]={-1,1,0};
bool check(int a,int b){
  return a>=1&&b>=1&&a<=n&&b<=n;
}
long long solve(int x,int y,int dir,int left){
    long long &ret=dp[x][y][left][dir];
    bool &flag=visit[N][N][left][dir];
    if(flag)return ret;
    flag=1;    ret=-1e9;
    if(left<0)return -1e9;   
    if(x==n&&y==n){
  //  cerr<<"helloo"<<endl;
            if(cost[x][y]<0){
		left--;
		if(left>=0)
		ret=cost[x][y];
		}
		return ret; 
      }

    for(int i=0;i<3;i++){
       int a=x+xx[i],b=y+yy[i];

       if(check(a,b)&&cost[a][b]!=1e9){
          long long t=cost[x][y];
//          ret=max(ret,solve(a,b,i,t>=0?left:left-1)+t);
           cost[x][y]=1e9;
          long long tmp=solve(a,b,i,((t>=0)?left:left-1));
          if(!(tmp<=-1e9)){
          ret=max(ret,tmp+t);
          }
          cost[x][y]=t;
         //cerr<<"cost"<<ret<<endl;
       //  cerr<<"a->"<<a<<" -b->"<<b<<" -cost->"<<ret<<endl;
        }
    }
     
    return ret;
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
#endif
       int cas=1;
       while(scanf("%d %d",&n,&k),(n||k)){
           for(int i=1;i<=n;i++){
              for(int j=1;j<=n;j++){
               scanf("%lld",&cost[i][j]);
              }
           }
           memset(dp,-1,sizeof(dp));
           memset(visit,0,sizeof(visit));
           long long ans=solve(1,1,0,k);
           printf("Case %d: ",cas++);
          ans>=-1e9?printf("%lld\n",ans):printf("impossible\n");
       }
}