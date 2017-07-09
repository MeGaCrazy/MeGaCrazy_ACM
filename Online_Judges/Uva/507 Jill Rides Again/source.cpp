#include <stdio.h>
using namespace std;
const int N=20001;
int arr[N];
int main(){
  int t,r,cas=1;
  freopen("in","r",stdin);
  scanf("%d",&t);
  while(t--){
     scanf("%d",&r);
              
    int st=0,sum=0,ans=-1,tmp=1,en=0;
    for(int i=2;i<=r;i++){
       scanf("%d",&arr[i]);
       sum+=arr[i];
       if(sum<0){
        tmp=i;
        sum=0;
        }    
       if(ans<=sum){
                 
           if(sum>ans||(sum==ans&&(i-tmp)>(en-st))){
             st=tmp; en=i;
            }
          ans=sum; 
        }
    }
    if(ans>0){
      printf("The nicest part of route %d is between stops %d and %d\n",cas++,st,en);
     }else
     printf("Route %d has no nice parts\n",cas++);
   }
}