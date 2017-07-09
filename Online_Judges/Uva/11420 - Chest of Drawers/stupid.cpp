#include <stdio.h>
#include <string.h>
using namespace std;
#define lock 0
#define unlock 1
typedef long long  ll;
ll dp[70][70][2];
ll solve(int i,int cntSecure,int pas){
   if(i<0||cntSecure<0)return 0;
   if(i==0 &&cntSecure==0)return 1;
   ll &ret=dp[i][cntSecure][pas];
   if(ret!=-1)
        return ret;
   if(pas==lock) 
          ret=solve(i-1,cntSecure-1,lock)+solve(i-1,cntSecure,unlock);
   else 
          ret=solve(i-1,cntSecure,lock)+solve(i-1,cntSecure,unlock);
  return ret;
}                                      
int main(){
    int n,s;
    freopen("in.txt","r",stdin);
    while(scanf("%d%d",&n,&s)){
      if(n<0&&s<0)break;
      memset(dp,-1,sizeof(dp));
      printf("%lld\n",solve(n,s,lock));
   }

}                                       