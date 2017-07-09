#include <stdio.h>
#include <string.h>
using namespace std;
int dp[75][75];
int main(){
     freopen("in.txt","r",stdin);
      int k,t,p;
      int cas;
      scanf("%d",&cas);
      while(cas--){
      scanf("%d%d%d",&k,&t,&p);
       memset(dp,0,sizeof(dp));
       dp[0][0]=1;
       for(int i=1;i<=k;i++){
         for(int j=p;j<=t;j++){
            for(int s=p;s<=t;s++){
              if(j-s>=0)dp[i][j]+=dp[i-1][j-s];
             }
          }
       }
      printf("%d\n",dp[k][t]);
  } 
}
