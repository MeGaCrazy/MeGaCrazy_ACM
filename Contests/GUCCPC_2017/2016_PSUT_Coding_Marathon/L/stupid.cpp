#include <bits/stdc++.h>
using namespace std;
int f;
const int N=25;
int a[N];
char o[N];
      int n;
int solve(int idx,int value){
    if(idx==n){
      if(!value){f=1;return 0;}
      return (int)1e9; 
    }
    int ret=(int)2e9;
    if(idx==0){
      ret=min(ret,solve(idx+1,value+a[idx]));
    }else{
    
    if(o[idx]=='-'){
     ret=min(ret,solve(idx+1,value+a[idx])+1);
     ret=min(ret,solve(idx+1,value-a[idx]));
    }
    else if(o[idx]=='+'){
      ret=min(ret,solve(idx+1,value+a[idx]));
      ret=min(ret,solve(idx+1,value-a[idx])+1);
    }
 }
 return ret;

}
int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
      scanf("%d",&n);
      scanf("%d",&a[0]);
      for(int i=1;i<n;i++){  	
        scanf(" %c %d",o+i,a+i);
      }
      int ans=solve(0,0);
      if(f==0){
        puts("-1");
      }else{
        printf("%d\n",ans);
      }
          
}