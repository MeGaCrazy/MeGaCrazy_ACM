#include <bits/stdc++.h>
using namespace std;
const int N=105;
int dp[N][N];
bool arr[N][N];
bool check(int r,int c,int a,int b){
  return a&&b&&a<=r&&b<=c;
}
int main(){
#ifndef ONLINE_JUDGE
       freopen("in.txt","r",stdin);
#endif
      int t;
      scanf("%d",&t);
      while(t--){
          int r,c;
          scanf("%d %d",&r,&c);
          memset(arr,0,sizeof(arr));
          memset(dp,0,sizeof(dp));
          string s;
          cin.ignore();
          for(int i=1;i<=r;i++){
            getline(cin,s);
            stringstream in(s);
            int a,b;
            in>>a;
            while(in>>b){
               arr[a][b]=1;
             }
         }
         dp[1][1]=1;
         int a,b;
         for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
               if(!arr[i][j]){
                  a=i-1,b=j;
                 if(check(r,c,a,b)){
                    dp[i][j]+=dp[a][b];
                  }
                  a=i,b=j-1;
                 if(check(r,c,a,b)){
                    dp[i][j]+=dp[a][b];
                  }
               }
            }
         }
         printf("%d\n",dp[r][c]);
         if(t)printf("\n");
      }
}