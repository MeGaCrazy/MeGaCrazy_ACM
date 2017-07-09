#include <bits/stdc++.h>
using namespace std;
const int N=105;
int dp[N][N],arr[N][N];
int r,c;
#define  inf 1e9
int x[]={0,0,-1,1};
int y[]={1,-1,0,0};
bool is_valid(int i,int j,int s,int e){
   return i<r&&i>=0&&j<c&&j>=0&&arr[i][j]<arr[s][e];
}
int solve(int xx,int yy){
     if(!xx&&!yy)return 0;
     int &ret=dp[xx][yy];
     if(ret!=-1)
      return ret;
     ret=0;
     for(int i=0;i<4;i++){
        int a=xx+x[i],b=yy+y[i];
        if(is_valid(a,b,xx,yy))ret=max(ret,solve(a,b)+1);
     }
      return ret ;
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
#endif
      int t;
      scanf("%d",&t);
      while(t--){
           string name;
           cin>>name>>r>>c;
           for(int i=0;i<r;i++){
               for(int j=0;j<c;j++){
                  scanf("%d",&arr[i][j]);
               }
           }
           memset(dp,-1,sizeof(dp));
           int ans=0;
           for(int i=0;i<r;i++){
               for(int j=0;j<c;j++){

                  ans=max(ans,solve(i,j));
               }
           }
           printf("%s: %d\n",name.c_str(),++ans);
      } 
}