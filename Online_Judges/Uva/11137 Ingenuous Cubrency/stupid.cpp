#include <stdio.h>
#include <string.h>
using namespace std;
long long dp[10005];
void  gen(){
   memset(dp,0,sizeof(dp));
   dp[0]=1;
   int t=1;
   for(int i=t*t*t;i<=10000;){
     for(int j=i;j<=10000;j++){
          dp[j]+=dp[j-i];
        }
       t++;
      i=t*t*t;
    }
}
int main(){
    freopen("in.txt","r",stdin);
    gen();
    int n;
    while(scanf("%d",&n)!=EOF){
     printf("%lld\n",dp[n]);
    }
}