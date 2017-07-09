#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;
const int N=100;
int arr[N],n,sum,memo[105][50001];
int solve(int index,int rem){
   if(index>=n)return abs(rem-(sum-rem));
   
   if(memo[index][rem]!=-1)
          return memo[index][rem];
      if(arr[index]>rem)
         memo[index][rem]=solve(index+1,rem);

       return memo[index][rem]=min(solve(index+1,rem),solve(index+1,rem+arr[index]));
}
int main(){
	int t;
        freopen("in.txt","r",stdin);
        scanf("%d",&t);
        while(t--){
        memset(memo,-1,sizeof(memo));
        scanf("%d",&n);
        sum=0;
        for(int i=0;i<n;i++){
               scanf("%d",&arr[i]);
              sum+=arr[i];
         }
        int ans=solve(0,0);
         printf("%d\n",ans);
      }
}