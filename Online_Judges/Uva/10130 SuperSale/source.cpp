#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int n;
int val[1005],w[1005],memo[1005][31];
//int solve(int i,int remw){
 // if(i==n||remw<=0){
  //  return 0;
   // }
 // if(memo[i][remw]!=-1)
   //     return memo[i][remw];
 // if(remw-w[i]<0)
   //    memo[i][remw]=solve(i+1,remw);  	
 // return memo[i][remw]=max(solve(i+1,remw),val[i]+solve(i+1,remw-w[i]));
//}
void solve2(){
   for(int i=1;i<=n;i++){
      for(int j=1;j<=30;j++){
             if(j<w[i]){
              memo[i][j]=memo[i-1][j];
              }else{
               memo[i][j]=max(memo[i-1][j],val[i]+memo[i-1][j-w[i]]);
               }

          }


     }
}
int main(){
      int t;
     freopen("in.txt","r",stdin);
     scanf("%d",&t);
     while(t--){
       scanf("%d",&n);
       for(int i=1;i<=n;i++){
          scanf("%d %d",&val[i],&w[i]);
        } 
        int q,v,ans=0;
        scanf("%d",&q);
        memset(memo,0,sizeof(memo));
        solve2();
        for(int i=0;i<q;i++){     
           scanf("%d",&v);
            ans+=memo[n][v];
        }
         printf("%d\n",ans);
     
      }
} 