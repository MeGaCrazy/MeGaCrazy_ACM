#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define OO 9999999
int dp[55][55],arr[55],n,l;
int solve(int lef,int r){
    if(lef+1==r)return 0;
    int &ret=dp[lef][r];
    if(ret!=-1)
        return ret;
    ret=OO;
    for(int i=lef+1;i<r;i++){
      ret=min(ret,solve(lef,i)+solve(i,r)+(arr[r]-arr[lef]));
    }                                                                   	
   return ret;
}
int main(){
   // yes i got it 
   freopen("in.txt","r",stdin)  ;
   while(scanf("%d",&l),l){
       scanf("%d",&n);
     for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
      }
     arr[0]=0;
     arr[n+1]=l;
     memset(dp,-1,sizeof(dp));
     printf("The minimum cutting is %d.\n",solve(0,n+1));
   }
}