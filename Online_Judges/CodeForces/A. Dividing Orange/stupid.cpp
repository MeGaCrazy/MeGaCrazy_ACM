#include <stdio.h>
using namespace std;
int main(){
   bool visited[905]={0};
   int arr[35],n,k;
   scanf("%d%d",&n,&k);
   for(int i=0;i<k;i++){
     scanf("%d",&arr[i]);
     visited[arr[i]]=1;
   }
   for(int i=0;i<k;i++){
     int cnt=0;
    for(int j=1;cnt!=n-1&&j<=n*k;j++){
          if(visited[j]!=1){
           printf("%d ",j);
           visited[j]=1;
           cnt++;
          }
    }

  printf("%d\n",arr[i]);   
 }
}