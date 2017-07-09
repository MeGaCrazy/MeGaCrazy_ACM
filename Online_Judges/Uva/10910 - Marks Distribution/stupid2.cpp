#include <stdio.h>
#include <string.h>
using namespace std;
int dp[75][75],p,t;
int solve(int n,int k){
   if(k==0){
     if(n==0)return 1;
     return 0;
    }
  int &ret=dp[n][k];
  if(ret!=-1)
      return ret;
  ret=0;
  for(int i=p;i<=t;i++){
    ret+=solve(n-i,k-1);
  }
  return ret;
}
int main(){
   freopen("in.txt","r",stdin);
   int cas,k;
   scanf("%d",&cas);
   while(cas--){
      scanf("%d%d%d",&k,&t,&p);
      memset(dp,-1,sizeof(dp));
      printf("%d\n",solve(t,k));
    }
}