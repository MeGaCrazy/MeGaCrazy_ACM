#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int n;
long long dp[23][23];
long long solve(int i,int j){
    long long &ret=dp[i][j];
    if(ret!=-1)
          return ret;
    if(i<j){
       for(int k=i;k<j;k++){
           ret=max(ret,solve(i,k)+solve(k+1,j));
        }
    }else{
        long long a1=0,a2=0;
        if(i<n){
         for(int k=i+1;k<=n;k++){
              a1=max(a1,solve(k,1)+solve(k,j));
            }
          }
        if(j>1){
          for(int k=1;k<j;k++){
              a2=max(a2,solve(i,k)+solve(n,k));
             }
         }
       ret=a1+a2;
      }
  return ret;
}
int main(){
     freopen("in.txt","r",stdin);
     while(scanf("%d",&n)!=EOF){
         memset(dp,-1,sizeof(dp));
         scanf("%lld",&dp[n][1]);
         printf("%lld\n",solve(1,n));
     }
}