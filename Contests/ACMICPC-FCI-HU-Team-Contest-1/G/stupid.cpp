/*
*  Just make Xor for all number then make knapsack distrubiton :) 
*
*
*/

#include <bits/stdc++.h>
using namespace std;
int dp[55][250];
int n;
const int MOD=1e9+7;
int sum;
int solve(int i,int x){
      int &ret=dp[i][x];
      if(ret!=-1)return ret;
      if(i==n+1){
       return  x > ( x ^ sum);
      }
      ret=0;
      ret=((long long )solve(i+1,x)+solve(i+1,x^i))%MOD;
      return ret;
}
int main(){
//#ifndef ONLINE_JUDGE
        freopen("sets.in","r",stdin);
//#endif
       int t;
      scanf("%d",&t);
      while(t--){

         scanf("%d",&n);
         memset(dp,-1,sizeof(dp));
          sum=0;
         for(int i=1;i<=n;i++){
            sum^=i;
         }
         printf("%d\n",solve(1,0));
      }



}