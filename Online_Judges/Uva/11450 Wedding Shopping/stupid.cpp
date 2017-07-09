#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define OO 1234567
int dp[205][25],arr[25][25],m,c;
int dodo(int i,int value){
     if(value>m)return OO;
     if(i==c+1)return m-value;
     int &ret=dp[value][i];
     if(ret!=-1)
          return ret;
    ret=OO;
    for(int indx=1;indx<=arr[i][0];indx++){
      ret=min(ret,dodo(i+1,value+arr[i][indx]));
    } 
  return ret; 
}
int main(){
   freopen("in.txt","r",stdin);
   int t;
   scanf("%d",&t);
   while(t--){
      scanf("%d %d",&m,&c);
      for(int i=0;i<c;i++){
        scanf("%d",&arr[i][0]);
       for(int j=1;j<=arr[i][0];j++){
           scanf("%d",&arr[i][j]);
         }    
      }
      memset(dp,-1,sizeof(dp));
      int ans=dodo(0,0);
      if(ans>=OO)printf("no solution\n");
      else  printf("%d\n",ans);
   }
}