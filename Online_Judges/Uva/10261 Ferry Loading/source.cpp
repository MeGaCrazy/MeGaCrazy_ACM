#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int n,len,arr[105],dp[105][10005],ans[105];
void solve(){
     for(int i=1;i<=n;i++){
       for(int j=1;j<=len;j++){
           if(j<arr[i]){
               dp[i][j]=dp[i-1][j];
            }else{
              dp[i][j]=max(dp[i-1][j],arr[i]+dp[i-1][j-arr[i]]);
              }
       }

    }
}
inline int  asign(){
 int cnt=0;
 for(int i=n,j=len;j>0&&i>0;i--){
      if(dp[i][j]!=dp[i-1][j]){
           ans[i]=1;
          j-=arr[i];
          cnt++;
         }
  }
}
int main(){
     freopen("in.txt","r",stdin);
     int t,a;
     scanf("%d\n",&t);
     while(t--){
        scanf("%d",&len);
        n=1;
        while(scanf("%d",&a),a){arr[n++]=a;}
        memset(dp,0,sizeof(dp));
        memset(ans,0,sizeof(ans));
        solve();
        printf("%d",asign());
        for(int i=1;i<=n;i++){
           if(ans[i]){
             printf("port\n");
            }else 
            printf("starboard\n");
       }  


  }
}                                                                        