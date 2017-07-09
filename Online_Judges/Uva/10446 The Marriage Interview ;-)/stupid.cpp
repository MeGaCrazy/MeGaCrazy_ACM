#include <stdio.h>
#include <string.h>
using namespace std;
int back;
unsigned long long int dp[65];
unsigned long long int solve(int value){
    if(value<=1)return 1;
    if(dp[value]!=0)return dp[value];
    dp[value]=1;
    for(int i=1;i<=back;i++){
      dp[value]+=solve(value-i);
   }
  return dp[value];    
}
int main(){
   freopen("in.txt","r",stdin);
   int cas=1,n;
   while(scanf("%d %d",&n,&back),n<=60){
         memset(dp,0,sizeof(dp));
         printf("Case %d: %llu\n",cas++,solve(n));
   }
}