#include <stdio.h>
#include <algorithm>
using namespace std;
const int N=1234567;
int arr[N];
int main(){
 int n,m;
  freopen("in.txt","r",stdin);
     while(scanf("%d %d",&n,&m)!=EOF){
        int hi=0,lo=0,ans=1;
         for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(lo<arr[i])lo=arr[i];
            hi+=arr[i];
       }
     if(m>=n){
       sort(arr,arr+n);
         ans=arr[n-1];
      }else{
        while(lo<hi){
          int sum=0,cont=0,mid=(hi+lo)/2;
           for(int i=0;i<n;i++){
               sum+=arr[i];
              if(sum>mid) 
                   cont++,sum=arr[i];
              else if(sum==mid)
                   cont++,sum=0;
            }
              if(sum>0)cont++;

              if(cont>m)lo=mid+1;
              else hi=mid;
              
           }
         ans=lo;
       }
      printf("%d\n",ans);            

   }



 }