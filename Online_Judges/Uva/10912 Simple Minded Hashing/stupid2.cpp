#include <stdio.h>
#include <string.h>
int dp[27][27][355];
using namespace std;
void build(){
      memset(dp,0,sizeof(dp));
     dp[0][0][0]=1;
     for(int i=1;i<=26;i++){     // here we assume z to a like but z 1 and a 26 
       for(int j=0;j<=i;j++){
          for(int k=0;k<=351;k++){
             dp[i][j][k]=dp[i-1][j][k];
              if(j>0&&k>=i)
                 dp[i][j][k]+=dp[i-1][j-1][k-i];
           }                                                          	
        }
    }
}
int main(){
    freopen("in.txt","r",stdin);
    build();
    int l,s,cas=1;
    while(scanf("%d%d",&l,&s)!=EOF){
       if(!l&&!s)break;
       if(l>26||s>=355){printf("Case %d: %d\n",cas++,0);}
       else printf("Case %d: %d\n",cas++,dp[26][l][s]);
    }
}
