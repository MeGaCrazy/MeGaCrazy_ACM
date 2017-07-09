#include <stdio.h>
using namespace std;
int main(){
  bool dp[210][2];
  int arr[25][25];
  int c,m,t;
  scanf("%d",&t);
  while(t--){
      scanf("%d%d",&c,&m);
      for(int i=0;i<c;i++){
          scanf("%d",&arr[i][0]);
         for(int j=1;j<=arr[i][0];j++){
          scanf("%d",&arr[i][j]);
       }
    }
     memset(dp,0,sizeof(dp));
    // make 1 first utilize
    int that=0;
    for(int in=1;in<=arr[0][0];in++){
         if(m-arr[0][in]>=0){
            dp[m-arr[0][in]][that]=1;
          }
      }
    for(int in=1;in<c;in++){
       for(int mon=0;mon<m;mon++)if(dp[that][money]){
           for(int k=1;k<=arr[in][0];k++){
              if(mon-arr[in][k]>=0)dp[that][money-arr[in][k]]=1;
             }
      }
     that=!that;
   }







  }







}