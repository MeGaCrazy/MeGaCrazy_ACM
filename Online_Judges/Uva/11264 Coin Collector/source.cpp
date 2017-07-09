#include <stdio.h>
using namespace std;
const int N=1000;
int arr[N];
int main(){
   int t,n;
   freopen("in","r",stdin);
   scanf("%d",&t);
   while(t--){
     scanf("%d",&n);
     for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
     int cnt=n==1?1:2,mount=arr[0];
     for(int i=1;i<n-1;i++){
       if(arr[i]+mount<arr[i+1]){
         mount+=arr[i];
         cnt++;      
          }
      }  
    printf("%d\n",cnt);
  }
}