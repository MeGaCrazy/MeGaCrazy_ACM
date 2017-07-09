#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int const N=105;
int dp[N][N];
int main(){
   int t;
   //freopen("in.txt","r",stdin);
   scanf("%d",&t);
   while(t--){
    int s,n,r1,c1,r2,c2;
    scanf("%d %d",&s,&n);
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
       scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
       for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
          dp[i][j]=1;
          }
        }      
     } 
   ///// start cumulate ///////
   for(int i=1;i<=s;i++){
    for(int j=1;j<=s;j++){
       dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
    }
  }
     
  ////// sub matrix //////
    int ans=0;
   for(int i=1;i<=s;i++){
      for(int j=1;j<=s;j++){
        for(int k=i;k<=s;k++){
           for(int l=j;l<=s;l++){
            int sum=dp[k][l]-dp[i-1][l]-dp[k][j-1]+dp[i-1][j-1];
            if(sum==0){
              ans=max(ans,(k-i+1)*(l-j+1));
              }

         }
       }
     }
  }

 printf("%d\n",ans);
 }













}
