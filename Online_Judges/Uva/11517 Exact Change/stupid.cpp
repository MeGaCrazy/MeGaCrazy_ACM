#include <stdio.h>
#include <string.h>
using namespace std;
#define inf     999999
#define min(a,b)  ((a)<(b)?(a):(b))
int arr[105];
void solve(int n,int salary){
   int dp[15005]={0};      
   for(int i=1;i<=15000;i++)dp[i]=inf;
     for(int i=0;i<n;i++){
          for(int j=arr[i];j<=15000;j++){
              dp[j]=min(dp[j],1+dp[j-arr[i]]);
           }

      }
  for(int i=salary;i<=15000;i++){
      if(dp[i]!=inf){
        printf("%d %d\n",i,dp[i]);
        break;
        }
  }	
}
int main(){
    freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--){
      int sal,n;
      scanf("%d %d",&sal,&n);
      for(int i=0;i<n;i++)
          scanf("%d",&arr[i]);
       solve(n,sal);
   }
}