#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
const int N=30;
int  arr[N][N];
char str[N][N];
int main(){
      int n;
      freopen("in","r",stdin);
      scanf("%d\n",&n);
      while(n--){
         memset(str,0,sizeof(str));
         memset(arr,0,sizeof(arr));
         gets(str[0]);
         int length=strlen(str[0]);
         for(int i=1;i<length;i++)
                gets(str[i]); 
         
         for(int i=0;i<length;i++){ 
           for(int j=0;j<length;j++){
                  arr[i][j]=str[i][j]=='0'?-225:1;
                  if(i>0)arr[i][j]+=arr[i-1][j];
                  if(j>0)arr[i][j]+=arr[i][j-1];
                  if(i>0&&j>0)arr[i][j]-=arr[i-1][j-1];
                }    

        }
        int ans=0;
        for(int i=0;i<length;i++){ 
          for(int j=0;j<length;j++){
            for(int k=i;k<length;k++){
              for(int l=j;l<length;l++){
                   int tmp=arr[k][l];
                   if(i>0)tmp-=arr[i-1][l];
                   if(j>0)tmp-=arr[k][j-1];
                   if(i>0&&j>0)tmp+=arr[i-1][j-1];
                   ans=max(ans,tmp);
                   }
                }
             }
          }
        printf("%d\n",ans);
        if(n){
           printf("\n");
        }  
    }
}                        		