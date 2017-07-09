#include <stdio.h>
#include <string.h>
const int N=105;
long dp[N][N];
int main() {
     int t,cas=1;
     freopen("in.txt","r",stdin);
     scanf("%d",&t);
     while(t--){
        int n,m,bla;
        scanf("%d %d %d",&n,&m,&bla);
  ///// get input and cumulate /////
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              scanf("%d",&dp[i][j]);
              if(i>0)dp[i][j]+=dp[i-1][j];
              if(j>0)dp[i][j]+=dp[i][j-1];
              if(i>0&&j>0)dp[i][j]-=dp[i-1][j-1];             
             }
          }
 ////// get max submatrix //////////
       long  maxplot=0,cost=2e9;
      for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
           for(int k=i;k<n;k++){
             for(int l=j;l<m;l++){
              long tmp=dp[k][l];
              if(i>0)tmp-=dp[i-1][l];
              if(j>0)tmp-=dp[k][j-1];
              if(i>0&&j>0)tmp+=dp[i-1][j-1];
              int curplot=(k-i+1)*(l-j+1);             
              if(tmp>bla)continue;
              if((maxplot<curplot)||(maxplot==curplot&&cost>tmp)){
                maxplot=curplot;
                cost=tmp;
               } 
             }
          }
        }
      }

   printf("Case #%d: %d %d\n",cas++,maxplot,cost);
 }
}