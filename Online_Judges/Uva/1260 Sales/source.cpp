#include <stdio.h>
#include <vector>
using namespace std;
typedef vector<int>vi;
int main(){
  int t;
  //freopen("in.txt","r",stdin);
  scanf("%d",&t);
  while(t--){
   int n;
   scanf("%d",&n);
   vi a;
   int x,sum=0;

   for(int i=0;i<n;i++){
      scanf("%d",&x);
      a.push_back(x);
   }
   for(int i=1;i<n;i++){
    int cnt=0;
    for(int j=i-1;j>=0;j--){
       if(a[j]<=a[i]) cnt++;
    }
     sum+=cnt;
   
   }
   printf("%d\n",sum);
  
  }




}