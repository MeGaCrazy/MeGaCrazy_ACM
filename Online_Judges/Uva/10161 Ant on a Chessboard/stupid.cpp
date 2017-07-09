#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
      freopen("in","r",stdin);
#endif
  int n;
  while(scanf("%d",&n),n){
      int root=ceil(sqrt(n));
      int point=root*root-(root-1);
      int x=root,y=root;
      if(root&1){
          if(n>point)x-=(n-point);
           else  y-=(point-n);
      }else{
          if(n>point)y-=(n-point);
           else x-=(point-n);
      }
      printf("%d %d\n",x,y);
  }
}