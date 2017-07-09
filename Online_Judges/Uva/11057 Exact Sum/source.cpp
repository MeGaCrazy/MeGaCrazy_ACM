#include <stdio.h>
#include <set>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;
int n,m,a[10001];
int main(){
   freopen("in.txt","r",stdin);
  while(scanf("%d",&n)!=EOF){
      set<int>nums;
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
      }
      scanf("%d",&m);
      int l=0,h=111111110;
       sort(a,a+n);
      for(int i=0;i<n;i++){
      if(nums.find(m-a[i])!=nums.end()&&abs((m-a[i])-a[i])<h-l){;
           h=a[i],l=m-a[i];
           if(l>h)swap(l,h);
          }else{
            nums.insert(a[i]);
        }
    }

   printf("Peter should buy books whose prices are %d and %d.\n\n",l,h);  
   scanf("\n");
   }
}
