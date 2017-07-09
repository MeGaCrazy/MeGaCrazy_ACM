#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,t;
  scanf("%d",&t);
  while(t--){
     scanf("%d",&n);
     n=abs(n);
     int k=0;
     for( k=1;;k++){
       if(k*(k+1)/2>=n&&(k*(k+1)/2-n)%2==0){
         break;
       }
     }
     printf("%d\n",k);
     if(t)printf("\n");
  }
}