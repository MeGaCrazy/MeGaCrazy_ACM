/*
*  Like Nim Game :)
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
     freopen("primes.in","r",stdin);
     int t;
     scanf("%d",&t);
     while(t--){
        int l,r,p;
        scanf("%d %d %d",&l,&r,&p);
        int ans=0;
        for(int i=l;i<=r;i++){
            int tmp=i;
            int cnt=0;
            while(tmp%p==0){
             cnt++,tmp/=p;
            }
            ans^=cnt;
        }
        if(!ans)puts("Second");else puts("First");
            
     }
}