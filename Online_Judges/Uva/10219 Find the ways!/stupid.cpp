#include <bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
       freopen("in.txt","r",stdin);
#endif
        unsigned long long n,k;
        while(scanf("%llu %llu",&n,&k)==2){
              long double sum=0;
              for(int i=n-k+1;i<=n;i++){
                  sum+=log10((double)i);
              }
              for(int i=1;i<=k;i++){
                sum-=log10((double)i);
              }
              printf("%d\n",(int)sum+1);

        }
}