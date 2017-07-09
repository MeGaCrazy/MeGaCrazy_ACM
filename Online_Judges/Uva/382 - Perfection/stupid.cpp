#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  printf("PERFECTION OUTPUT\n");
  while(scanf("%d",&n),n){
     int sum=0;
     for(int i=1;i<n;i++){
         if(n%i==0)sum+=i;
     }
     printf("%5d  ",n);
     if(sum>n)printf("ABUNDANT\n");
     else if(sum==n)printf("PERFECT\n");
     else printf("DEFICIENT\n");
  }
  printf("END OF OUTPUT\n");

}