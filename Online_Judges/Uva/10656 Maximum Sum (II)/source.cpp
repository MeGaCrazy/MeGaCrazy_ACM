#include <stdio.h>
using namespace std;
const int N=1000;
int arr[N];
int main(){
  freopen("in.txt","r",stdin);
  int n;
  while(scanf("%d",&n),n){
   int pos=0;
   for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
      if(arr[i])pos++;
   }
     int first=0;
    if(pos>0){
      for(int i=0;i<n;i++){
        if(arr[i]){
         if(first++>0)printf(" ");
         printf("%d",arr[i]);
       }
     }
     printf("\n");
    }else{ 
      printf("0\n");
    }

   }
}
