#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
const int N=1234567;
int arr[N],n,dp_cur[N],pos[N];
int LDS(){
  reverse(arr,arr+n);
  int len=0;
  for(int i=0;i<n;i++){
      int pos=lower_bound(dp_cur,dp_cur+len,arr[i])-dp_cur;
      dp_cur[pos]=arr[i];
      if(pos+1>len){
        len=pos+1;
      }
   }
      return len;
}
int main(){
    int a,t=1;
    freopen("in.txt","r",stdin);
    while(1){
      a=0;
     for(n=0;;n++){
        scanf("%d",&a);
        if(a==-1)break;
          arr[n]=a;
     }
     if(n==0)break;
     if(t>1){printf("\n");}
     printf("Test #%d:\n  maximum possible interceptions: %d\n",t++,LDS());   
   } 
}