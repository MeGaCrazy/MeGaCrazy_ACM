#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
 int b,s,cas=1;
 freopen("in.txt","r",stdin);
 while(scanf("%d %d",&b,&s),b||s){
   int sb=2e9,y;
   for(int i=0;i<b;i++){
      scanf("%d",&y);
      sb=min(sb,y);
   }
   for(int i=0;i<s;i++)scanf("%d",&y);
   printf("Case %d: ",cas++);
   if(b<=s)
      printf("0\n");
   else
    printf("%d %d\n",b-s,sb);
  }
}