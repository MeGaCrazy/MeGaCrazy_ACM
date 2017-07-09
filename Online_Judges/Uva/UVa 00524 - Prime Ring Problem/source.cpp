#include <stdio.h>
using namespace std;
int n,t,arr[20],primes[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43};
bool visit[20];
bool is_prime(int n){
 for(int i=0;i<14;i++){
    if(n==primes[i])return true;
  }
   return false;
}
void backtrack(int m){
    if(m==n-1&&is_prime(arr[n]+arr[n-1])){
     for(int i=0;i<n;i++){
        printf(i==n-1?"%d":"%d ",arr[i]);
     }printf("\n");
      return;
   }
   for(int i=2;i<=n;i++){
    if(!visit[i]&&is_prime(arr[m]+i)){
       arr[m+1]=i;
       visit[i]=1;
       backtrack(m+1);
       visit[i]=0;
      }
  }

}
int main(){
  // freopen("in","r",stdin);
  while(scanf("%d",&n)!=EOF){
     t++;
     if(t>1)printf("\n");
     printf("Case %d:\n",t);
     arr[0]=arr[n]=1;
     backtrack(0);
  }
}