#include <bits/stdc++.h>
using namespace std;
int main(){
//   freopen("in","r",stdin);
   int a,b;
   while(scanf("%d %d",&a,&b)!=EOF){
       int ans=0;
       int i=a,j=b;
       if(i>j)swap(i,j);
       while(i<=j){
          int n=i;
          int len=1;
          while(n!=1){
             if(n&1)n=n*3+1;
             else n/=2;
             len++;
          }
          if(len>ans)ans=len;
          i++;
       }
       printf("%d %d %d\n",a,b,ans);
    }

}