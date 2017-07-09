#include <stdio.h>
#include <string.h>
using namespace std;
int dp[10005];
#define OO 9999999
#define Min(a,b)   ((a)<=(b)?(a):(b))
void build(){
      for(int i=0;i<=10000;i++)   
           dp[i]=OO;
      dp[0]=0;
     for(int i=1;i<=10000;i++){
        for(int j=1;j*j<=i;j++){
            dp[i]=Min(dp[i],1+dp[i-(j*j)]);
         }
   }
}
int main(){
    build();
    freopen("in.txt","r",stdin);
    int t,n;
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
      printf("%d\n",dp[n]);
   }
}