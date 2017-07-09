#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
using namespace std;
int dp[25][205],arr[25],n,sum;
int solve(int i,int w){
  if(w*2>sum)return dp[i][w]=0;
  if(i==n){
     return (w*2)==sum;
   }
   if(dp[i][w]!=-1)
       return dp[i][w];

    return dp[i][w]=(solve(i+1,w)|solve(i+1,arr[i]+w));
}
int main(){
   int t;
   string s;
   freopen("in.txt","r",stdin);
   scanf("%d",&t);
   getchar();
   while(t--){
    getline(cin,s);
    istringstream in(s);
    n=0,sum=0;
    while(in>>arr[n]){
         sum+=arr[n++];
     }
     if(sum%2)printf("NO\n");
     else{
     memset(dp,-1,sizeof(dp));
     printf(solve(0,0)==0?"NO\n":"YES\n");
    }
  }
}