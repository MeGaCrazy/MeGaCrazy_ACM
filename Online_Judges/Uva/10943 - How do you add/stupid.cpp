#include <stdio.h>
#include <string.h>
using namespace std;
int dp[105][105];
int build(){
    memset(dp,0,sizeof(dp)); 
   for(int i=0;i<=100;i++)
       dp[i][1]=1; 
    
    for(int k=1;k<100;k++){
      for(int i=0;i<=100;i++){
         for(int j=0;j<=100-i;j++){
             dp[i+j][k+1]+=dp[i][k];
             dp[i+j][k+1]%=1000000;
         }
      }
   }
}
int main(){
    freopen("in.txt","r",stdin);
    build();            
    int k,n;
    while(scanf("%d%d",&n,&k)){
      if(!n&&!k)break;
     printf("%d\n",dp[n][k]);
   }
}