#include <bits/stdc++.h>
using namespace std;



int main(){
    //freopen("in","r",stdin);
    int t,cas=1;
    scanf("%d",&t);
    while(t--){
      int n;
      scanf("%d",&n);
      int ans=0;
      for(int i=0,a;i<n;i++){
         scanf("%d",&a);
         if(i==n/2)ans=a;
      }
      printf("Case %d: %d\n",cas++,ans);
    
    }


}