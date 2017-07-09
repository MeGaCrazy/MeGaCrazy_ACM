#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int const N=100;
char str[N][N];
int arr[N][N];
int main(){
      int n,m;
     freopen("in","r",stdin);
////// input//////
    while(scanf("%d%d",&n,&m)){
     if(!n&&!m)break;
     memset(arr,0,sizeof(arr));

//////// get cumulate sum ////////////
     for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
         scanf("%d",&arr[i][j]); 
          if(i>0)arr[i][j]+=arr[i-1][j];
          if(j>0)arr[i][j]+=arr[i][j-1];
          if(i>0&&j>0)arr[i][j]-=arr[i-1][j-1]; 
        }
    }

   // get max sub matrix //////////
   int ans=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        for(int k=i;k<n;k++){
           for(int l=j;l<m;l++){
                int tmp=arr[k][l];
                if(i>0)tmp-=arr[i-1][l];
                if(j>0)tmp-=arr[k][j-1];
                if(i>0&&j>0)tmp+=arr[i-1][j-1];
                if(tmp==0){
                 ans=max(ans,(k-i+1)*(l-j+1));
                }
                         
             } 
          }
       }
    }
   printf("%d\n",ans);
}


}