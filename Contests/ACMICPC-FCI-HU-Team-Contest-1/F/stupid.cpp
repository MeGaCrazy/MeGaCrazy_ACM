/*
*  Idea :  Just the indeces of the zero's cells and if they in same row get the col and vice verca :)
*
*
*/
#include <bits/stdc++.h>
using namespace std;
const int N=105;
int arr[N][N];




int main(){
//#ifndef ONLINE_JUDGE
        freopen("magic.in","r",stdin);
//#endif
       int t;
       scanf("%d",&t);
       while(t--){
          int n;
          scanf("%d",&n);
          int maxsum=0;
          int x=-1,y=-1,xx,yy;
          for(int i=1;i<=n;i++){
             int sum=0;
             for(int j=1;j<=n;j++){
                scanf("%d",&arr[i][j]);
                if(arr[i][j]==0){
                     if(x==-1&&y==-1)x=i,y=j;
                     else if(x&&y)xx=i,yy=j;
                }
                sum+=arr[i][j];
             }
             maxsum=max(sum,maxsum);
          }
          int ans1=-1,ans2=-1;
          if(x==xx||(x!=xx&&y!=yy)){
            for(int col=1;col<=n;col++){
               int sum=0;
              for(int row=1;row<=n;row++){
                 sum+=arr[row][col];
              }
              if(sum<maxsum){
                if(ans1==-1){
                  ans1=maxsum-sum;
                }else ans2=maxsum-sum;
              }
            } 
          }
          else if(y==yy){
            for(int row=1;row<=n;row++){
               int sum=0;
              for(int col=1;col<=n;col++){
                 sum+=arr[row][col];
              }
              if(sum<maxsum){
                if(ans1==-1){
                  ans1=maxsum-sum;
                }else ans2=maxsum-sum;
              }
            }
          }
          if(ans1>ans2){
            swap(ans1,ans2);
          }
          printf("%d %d\n",ans1,ans2);
       }

}