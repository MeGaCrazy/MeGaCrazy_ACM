#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
typedef vector<int>vi;
int main(){
  int n,m,a,b,c=1;
  freopen("in.txt","r",stdin);
  while(scanf("%d",&n),n){
  vi v;
  for(int i=0;i<n;i++){
  scanf("%d",&a);
  v.push_back(a); 
  }
  vi smp;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      smp.push_back(v[i]+v[j]); 
  
      }
  }
  printf("Case %d:\n",c++);
  int q;int sz=smp.size();
  scanf("%d",&q);
  for(int i=0;i<q;i++){
   scanf("%d",&b);
   int min=2e9,ans;
     for(int j=0;j<sz;j++){
          if(abs(smp[j]-b)<min){
          ans=smp[j];
          min=abs(smp[j]-b);
          }
     
     }
     printf("Closest sum to %d is %d.\n",b,ans); 
  
  }
  
  
  
  
  
  }




}