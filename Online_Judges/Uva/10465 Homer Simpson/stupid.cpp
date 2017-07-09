#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int dp[10005];
#define inf  99999999
int main(){
     freopen("in.txt","r",stdin);
     int m,n,t;
     int arr[2];
     while(scanf("%d %d %d",&m,&n,&t)!=EOF){
      for(int i=0;i<=t;i++){
         dp[i]=inf;
       }
        dp[0]=0;
      if(m>n)swap(m,n);
      for(int i=m;i<=t;i++){
        if(i-m>=0)dp[i]=1+dp[i-m];
        if(i-n>=0){
           if(dp[i]>=inf||dp[i-n]+1<=inf&& 1+dp[i-n]>dp[i]){
              dp[i]=dp[i-n]+1;
            }     
          }
      }
    for(n=t;n>=0;n--){
       if(!(dp[n]>=inf)){
         printf("%d",dp[n]);
         break;
       }
   }
   if(n!=t){
      printf(" %d",t-n);
    } 
    printf("\n");       
  }
}