#include <bits/stdc++.h>
using namespace std;




int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
       int t;
       scanf("%d",&t);
       while(t--){
          int n,k;
          scanf("%d %d",&n,&k);
           int xo=0;
           for(int i=1;i<=k;i++){
             xo^=i;
          }
          cerr<<xo<<endl;
          int ans=0;
          for(int i=0;i<=n+1;i++){
             if(((xo^i)&1)==0){
                cerr<<i<<endl;
                int a=((i+1)/2);
                a*=2;
                if((i&1)==0){
                   a++;
                }
               ans+=a;
             }
          }
          printf("%d\n",ans);

       }


}