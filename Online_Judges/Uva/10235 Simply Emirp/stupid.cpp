#include <bits/stdc++.h>
using namespace std;
const int N=1234567;
bool primes[N],vis[N];
void sieve(){
  for(int i=2;i<=1000000;i++){
     if(!vis[i]){
         primes[i]=1;
         for(int j=2;i*j<=1000000;j++){
             vis[i*j]=1;
         }
     }
 }

}
int rev(int s){
   int ans=0;
   while(s){
     ans=(ans*10)+s%10;
     s/=10;
   }
   return ans;
}
int main(){
  sieve();
  int n;
  while(scanf("%d",&n)==1){
     int a=rev(n);
     bool oka=false,okb=false;
     oka=primes[n];
     if(n!=a)okb=primes[a];
     if(oka&&okb){
        printf("%d is emirp.\n",n); 
       }else if(oka){
         printf("%d is prime.\n",n);
       }else{
       printf("%d is not prime.\n",n); 
     }
  }
}

