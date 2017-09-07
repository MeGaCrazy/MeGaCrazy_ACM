/*
*      Idea : First let say the array will be divisble by g then we have 2 choices
*             Increace +1 or delete element ...First whats in Numbers Range what is number not divisble by g
*             is The number Between multiple consective multiple of g  let say g=4 
*                 4 5 6 7 8
*                   |---|  this the range must be edit i can delete or i can add +1 and then all i do now
*                                                                                
*            choose Optimal split point and then before this point delete after this point increase  doable with Binary_Search
*            and collect the cost for all this Ranges Hence u will need some precalculations :)
*            
*            
*            Happy Solving :)                                                                                 
*/                                                                                 

#include <bits/stdc++.h>
using namespace std;
const int N=(int)2e6+15;
int cnt[N];
long long sum[N];



int main(){
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    for(int i=0,a;i<n;i++){
       scanf("%d",&a);
       cnt[a]++,sum[a]+=a;
    }
    for(int i=1;i<N-1;i++){
      cnt[i]+=cnt[i-1],sum[i]+=sum[i-1];
    }
    long long  ans=2e18;
    for(int i=2;i<=(int)1e6+5;i++){
       int l=1,r=i;
       while(l<r){
           int mid=(l+r)>>1;
           if((1ll)*(i-mid)*(y) < x)r=mid;
           else l=mid+1;
       }
       int split=r;
       long long  sol=0;
       for(int j=i;j<=(N-5);j+=i){
          int L=j-i;
          int R=j-i+split-1;
          sol+=(1ll)*(cnt[R]-cnt[L])*x;
          sol+=(((1ll*(cnt[j]-cnt[R])*j))-(sum[j]-sum[R]))*y;
       }
       ans=min(ans,sol);
    }
    printf("%lld\n",ans);

}
