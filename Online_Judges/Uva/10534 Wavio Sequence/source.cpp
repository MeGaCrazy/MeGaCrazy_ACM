#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
const int N=10000;
int arr[N],n,dpi[N],dpd[N],seq[N];
void LXS(int dp[]){
    int len=0;
    memset(seq,0,sizeof(seq));
    for(int i=0;i<n;i++){
       int index=lower_bound(seq,seq+len,arr[i])-seq;
       seq[index]=arr[i];
      if(index+1>len){
          len=index+1;
        }
        dp[i]=pos+1;
     }
}
int main(){
    freopen("in.txt","r",stdin);
    
    while(scanf("%d",&n)!=EOF){
     memset(dpi,0,sizeof(dpi));
     memset(dpd,0,sizeof(dpd));
     for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
     LXS(dpi);
     reverse(arr,arr+n);
     LXS(dpd);
     reverse(dpd,dpd+n);
     int ans=0;
     for(int i=0;i<n;i++){
          ans=max(ans,2*min(dpi[i],dpd[i])-1);
      }
       
     printf("%d\n",ans);
   }
}