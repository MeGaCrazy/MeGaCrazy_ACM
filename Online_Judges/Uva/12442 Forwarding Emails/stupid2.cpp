#include <stdio.h>
#include <string.h>
using namespace std;
int arr[50005];
int main(){
    freopen("in.txt","r",stdin);
    int t,n,cas=1;
    scanf("%d",&t);
    while(t--){
       memset(arr,1,sizeof(arr));
       scanf("%d",&n);
       int ans=0,tmp=0,a,b;
       for(int i=0;i<n;i++){
         scanf("%d %d",&a,&b);
         arr[a]+=arr[b];
         if(arr[a]>=tmp){
             if(arr[a]>tmp){
              tmp=arr[a];
              ans=a;
             }
             if(arr[a]==tmp&&a<ans){
              tmp=arr[a];
              ans=a;
             }
         }
       }
     printf("Case %d: %d\n",cas++,ans);
    }
}