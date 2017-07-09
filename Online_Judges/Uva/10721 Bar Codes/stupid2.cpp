#include <stdio.h>
#include <string.h>
long long dp[55][55];
using namespace std;
int main(){
     freopen("in.txt","r",stdin);
     int n,k,m;
     while(scanf("%d%d%d",&n,&k,&m)!=EOF){
        memset(dp,0,sizeof(dp));
       dp[0][0]=1;
       for(int i=1;i<=k;i++){
         for(int j=1;j<=n;j++){
           for(int s=1;s<=m;s++){
             if(j-s>=0)dp[i][j]+=dp[i-1][j-s];
             }
         }
     }
    printf("%lld\n",dp[k][n]);
 }
}