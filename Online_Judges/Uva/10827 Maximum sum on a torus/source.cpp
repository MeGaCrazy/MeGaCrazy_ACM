#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
const int r=300,c=300;

int main(){
    int t,n;
    freopen("in.txt","r",stdin);
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);

    int dp[r][c];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        scanf("%d",&dp[i][j]);
       dp[i+n][j]=dp[i][j+n]=dp[i+n][j+n]=dp[i][j];
      }
   }
   int col=2*n;
 //////// cumulate /////
   for(int i=0;i<col;i++){
    for(int j=0;j<col;j++){
        if(i > 0) dp[i][j] += dp[i - 1][j];
        if(j > 0) dp[i][j] += dp[i][j - 1];
        if(i > 0 && j > 0) dp[i][j] -= dp[i - 1][j - 1];
     }
   }
/////// get max submatrix /////
   int ans=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        for(int k=i;k<i+n;k++){
          for(int l=j;l<j+n;l++){
           int subRect = dp[k][l];
           if(i > 0) subRect -= dp[i - 1][l];
           if(j > 0) subRect -= dp[k][j - 1];
           if(i > 0 && j > 0) subRect += dp[i - 1][j - 1];
           ans = max(ans, subRect);
         }
       }	

    }   

 }  
 printf("%d\n",ans);




 }




}