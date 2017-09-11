/*
*  Idea : get max number :)
*
*/
#include <bits/stdc++.h>
using namespace std;





int main(){
//#ifndef ONLINE_JUDGE
        freopen("largest.in","r",stdin);
//#endif
    int t;
    scanf("%d",&t);
    while(t--){
      int n;
      scanf("%d",&n);
      int ans=0;
      for(int i=0,a;i<n;i++){
         scanf("%d",&a);
         ans=max(ans,a);
      }
      printf("%d\n",ans);
    }
}