#include <stdio.h>
using namespace std;
int cal(int a){
  int tmp=0;
  while(a>0){
    if(a%10==0){a/=10;continue;}
    tmp=(tmp*10)+(a%10);
    a/=10;
  }
  return tmp;
}
int main(){
  int a,b,sum;
  scanf("%d%d",&a,&b);
  sum=a+b;
  if(cal(a)+cal(b)==cal(sum)){
   printf("YES\n");
  }else printf("NO\n");
}