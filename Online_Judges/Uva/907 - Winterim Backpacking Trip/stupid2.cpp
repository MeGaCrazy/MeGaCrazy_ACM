#include <bits/stdc++.h>
using namespace std;
const int N=605;
int cost[N],dp[N][305];
int n,k;
int solve(int cur,int left){
        if(cur==n)return 0;
        if(!left){
         int sum=0;
         for(int i=cur;i<n;i++){
            sum+=cost[i];
           }
           return sum;
        }
        int &ret=dp[cur][left];
        if(ret!=-1)return ret;
        int distance=cost[cur];
        ret=2e9;
        for(int i=cur+1;i<n;i++){
          ret=min(ret,max(distance,solve(i,left-1)));
          distance+=cost[i];
        }
       return ret;
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
#endif
        while(scanf("%d %d",&n,&k)==2){
            n++;
            for(int i=0;i<n;i++){
              scanf("%d",&cost[i]);
            }
            memset(dp,-1,sizeof(dp));
            printf("%d\n",solve(0,k));
        }
}