#include <bits/stdc++.h>
using namespace std;
const int N=35;
int arr[N][N],dp[N][N],p[N][N];
bool check(int a,int b,int sz){
     for(int i=0;i<(int)sz;i++){
        if(arr[a][i]<arr[b][i])return 0;
     }
     return 1;
}
void print_path(int i,int j){
  if(i!=j){
     print_path(i,p[i][j]);
  }
  printf(i==j?"%d":" %d",j);
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
#endif
        int k,n;
        while(scanf("%d %d",&k,&n)!=EOF){
           for(int i=1;i<=k;i++){
              for(int j=1;j<=k;j++){
                dp[i][j]=1e9;
                p[i][j]=i;
              }
           }

            for(int i=1;i<=k;i++){
                for(int j=1;j<=n;j++){
                   scanf("%d",&arr[i][j]);
                }
                sort(arr[i],arr[i]+n+1);
            }
            for(int i=1;i<=k;i++){
               for(int j=1;j<=k;j++){
                 if(check(i,j,n))dp[i][j]=-1;
               }
            }
            /*int ans=1e9,ansi=0,ansj=0;
            for(int kk=1;kk<=k;kk++){
               for(int i=1;i<=k;i++){
                 for(int j=1;j<=k;j++){
                   if(dp[i][j]>dp[i][kk]+dp[kk][j]){
                        dp[i][j]=dp[i][kk]+dp[kk][j];
                        p[i][j]=p[kk][j];
                       if(ans>dp[i][j]){
                          ans=dp[i][j];
                          ansi=i;
                          ansj=j;
                       }
                    }
                 }
               }
            }
            */
            printf("%d\n",-1*ans);
            print_path(ansi,ansj);
            printf("\n");
        }
}