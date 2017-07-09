#include <stdio.h>
#include <utility>
#define min(a,b) ((a)<(b)?(a):(b))
using namespace std;
typedef pair<int,int>ii;
ii arr[45];
int solve(int n,int mod){
  int dp[305][305]={},res=mod*mod;
   for(int i=0;i<=mod;i++){
     for(int j=0;j<=mod;j++){
       dp[i][j]=99999;
      }
  }
   dp[0][0]=0;
  for(int i=0;i<n;i++){
     int con=arr[i].first,tech=arr[i].second;
     for(int j=con;j*j+tech*tech<=res;j++){
          for(int k=tech;j*j+k*k<=res;k++){
           dp[j][k]=min(dp[j][k],1+dp[j-con][k-tech]);
         }
  
      }
   }
   int ans=999999;
   for(int i=0;i<=mod;i++){
      for(int j=0;j<=mod;j++){
         if(i*i+j*j==res){
           ans=min(ans,dp[i][j]);
           }
       }
   }

    return ans;
}
int main(){
    freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--){
    int n,mod;
    scanf("%d %d",&n,&mod);

      for(int i=0;i<n;i++){
        scanf("%d %d",&arr[i].first,&arr[i].second);
       }
     int ans=solve(n,mod);
     if(ans>300){
          printf("not possible\n");
       }else 
          printf("%d\n",ans);  

    }
 
}