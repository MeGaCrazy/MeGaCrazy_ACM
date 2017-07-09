#include <stdio.h>
#include <string.h>
int dp[27][27][400],l,s;
using namespace std;
int solve(int n,int k,int i){
    if(i==27){
       if(n==s&&k==l)return 1;
        return 0;
     }
    int &ret=dp[i][k][n];
    if(ret!=-1)
         return ret;
     ret=0;
     ret+=solve(n,k,i+1)+solve(n+(i),k+1,i+1); 
  return ret;
}
int main(){
  freopen("in.txt","r",stdin);
  int cas=1;
  while(scanf("%d %d",&l,&s)){
      if(!l&&!s)break;
       memset(dp,-1,sizeof(dp));
      int ans=0;
      if(l<=26 || s<=353)ans=solve(0,0,1);
      printf("Case %d: %d\n",cas++,ans);
  }
}
