#include <stdio.h>
#include <string.h>
int dp[105][105];
using namespace std;
int solve(int k,int n){
     if(k==1)
         return 1;
     int &ret=dp[n][k];
     if(ret!=-1)
         return ret;
    ret=0;
    for(int i=0;i<=n;i++){
       ret+=solve(k-1,n-i)%1000000;
   }
  return ret;
}
int main(){
     freopen("in.txt","r",stdin);
     int k,n;
     while(scanf("%d%d",&n,&k)!=EOF){
         if(!n&&!k)break;
         memset(dp,-1,sizeof(dp));
         printf("%d\n",solve(k,n));
  }
}