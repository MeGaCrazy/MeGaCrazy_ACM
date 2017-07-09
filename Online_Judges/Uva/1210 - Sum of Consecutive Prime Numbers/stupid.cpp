#include <bits/stdc++.h>
using namespace std;
const int N=10005;
bool mark[N];
int primes[N],ans[N];
void sieve(){
     int n=0;
    for(int i=2;i<=10000;i++){
       if(!mark[i]){
           primes[n++]=i;
           for(int j=2;i*j<=10000;j++){
                mark[i*j]=1;
           }
       }
    }
    for(int i=0;i<n;i++){
        int sum=0;
       for(int j=i;j<n;j++){
            sum+=primes[j];
            if(sum>10000)break;
            ans[sum]++;
       }
    }
}
int main(){
    sieve();
    int n;
    while(scanf("%d",&n),n){
      printf("%d\n",ans[n]);
    }

}