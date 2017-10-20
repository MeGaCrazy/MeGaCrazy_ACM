#include <bits/stdc++.h>
using namespace std;




int main(){
//#ifndef ONLINE_JUDGE
        freopen("tabs.in","r",stdin);
//#endif
        int t;
        scanf("%d",&t);
        while(t--){
           int n,k;
           scanf("%d %d",&n,&k);
           if(n==1){
              puts("0");
           }
           else if(k==1||k==n){
             puts("1");
           }else
             puts("2");
        
        }
}