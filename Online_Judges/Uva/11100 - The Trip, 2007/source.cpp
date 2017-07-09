#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
const int N=100005;
int arr[N];
int main(){
     int n,cas=0;
     freopen("in","r",stdin);
     while(scanf("%d",&n)!=EOF,n){
        for(int i=0,a;i<n;i++)
             scanf("%d",&arr[i]);

       int cnt=1,ans=1; 
       sort(arr,arr+n);
       for(int i=0;i<n-1;i++){
         if(arr[i]!=arr[i+1])cnt=1;
         else ans=max(ans,++cnt);
        }
        if(cas++>0)printf("\n");
        printf("%d\n",ans);

       for(int i=0;i<ans;i++){
         for(int j=i;j<n;j+=ans){
            if(j>i)printf(" ");
             printf("%d",arr[j]);
            }
          printf("\n");
         }
    }

   

}