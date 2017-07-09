#include <bits/stdc++.h>
using namespace std;
int main(){
   int t,cas=1;
   scanf("%d",&t);
   while(t--){
       long long n;
       scanf("%lld",&n);
       long long ans=n*(n-1)/2;
       printf("Case %d: ",cas++);
       if(ans&1)printf("%lld/2\n",ans);
       else printf("%lld\n",ans/2);
   }
}