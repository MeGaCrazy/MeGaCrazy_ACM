#include <stdio.h>
#include <string.h>
using namespace std;
int m;
long long dp[55][55];
long long solve(int n,int k){
     if(k==0){
        if(n)return 0;
         return 1;
       }
     long long &ret=dp[n][k];
     if(ret!=-1)return ret;
      ret=0;
     for(int i=1;i<=m;i++){
       if(n-i>=0){
           ret+=solve(n-i,k-1); 
         }
    } 
  return ret;
}
int main(){
   freopen("in.txt","r",stdin);
   int n,k;
   while(scanf("%d %d %d",&n,&k,&m)!=EOF){
        memset(dp,-1,sizeof(dp));
        printf("%lld\n",solve(n,k));
    }
}