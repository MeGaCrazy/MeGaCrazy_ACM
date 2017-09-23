/*
*  Idea : Make dp, dp[i] — count of ways we can divide prefix of length i into beautiful substrings.
*          We want to calc dp[i]. Iterate j from i to 1 and break when not all numbers in [j, i] are unique otherwise 
*         add dp[j — 1] to dp[i] (making split before position j). Initial values: dp[0] = 1 (if you have indexes from 1
*
*
*         Happy Solving :)
*/
#include <bits/stdc++.h>
using namespace std;
const int MOD=(int)1e9+7;
const int N=10005;
int dp[N];
char s[N];
int n;
int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
    scanf("%d %s",&n,&s[1]);
    dp[0]=1;
    for(int i=1,j;i<=n;i++){
       int cnt[10]={0};
       for( j=i;j>=1;j--){
         if(cnt[s[j]-'0']++)break;
         dp[i]=(dp[i]+dp[j-1])%MOD;
       }
    }
    printf("%d\n",dp[n]);

}
