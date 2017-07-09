#include <stdio.h>
#include <string.h>
using namespace std;
int dp[201][15][25],d,arr[201],n;
int modulo(int x, int y)
{
    return ((x % y) + y) % y;
}
int solve(int i,int k,int value){
    if(k==0)
          return dp[i][k][value]=(value==0); 
     if(n==i)
         return 0;


     if(dp[i][k][value]!=-1)
          return dp[i][k][value];
   return dp[i][k][value]=solve(i+1,k,value)+solve(i+1,k-1,modulo(arr[i]+value,d));
}



int main(){
  freopen("in.txt","r",stdin);
  int q,cas=1;
  while(scanf("%d %d",&n,&q)){
      if(!n&&!q)break;
      printf("SET %d:\n",cas++);
     for(int i=0;i<n;i++)
         scanf("%d",&arr[i]);
      int qn=1;
      while(q--){
        int k;
        memset(dp,-1,sizeof(dp));
        scanf("%d %d",&d,&k);
        printf("QUERY %d: %d\n",qn++,solve(0,k,0)); 
     }

  }
}