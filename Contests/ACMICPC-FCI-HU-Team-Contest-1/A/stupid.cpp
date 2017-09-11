/*
*    Idea : Just move from l to r and sum (r/i)  :)
*
*
*
*
*/
#include <bits/stdc++.h>
using namespace std;





int main(){
//#ifndef ONLINE_JUDGE
        freopen("divisors.in","r",stdin);
//#endif
       int t=1;
       scanf("%d",&t);
        while(t--){
          long long  l,r;
          scanf("%lld %lld",&l,&r);
          int ans=0;
          for(int i=l;i<=r;i++){
              ans+=(r/i);
          }
           printf("%lld\n",ans);
         } 

}

 
