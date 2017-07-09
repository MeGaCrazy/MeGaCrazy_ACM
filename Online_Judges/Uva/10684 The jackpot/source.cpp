#include <stdio.h>
using namespace std;
int main(){
   int n,x;
   while(scanf("%d",&n),n){
     int sum=0,ans=0;
     for(int i=0;i<n;i++){
         scanf("%d",&x);
         sum+=x;
        if(ans<sum)
            ans=sum;
        if(sum<0)
            sum=0;  
      }
      ans>0?printf("The maximum winning streak is %d.\n",ans):printf("Losing streak.\n");
   }
}