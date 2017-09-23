/*
*   Idea : if m/n dividable  yes can  distrube otherwise no
*
*
*/
#include <bits/stdc++.h>
using namespace std;




int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
      int n,m;
      scanf("%d %d",&n,&m);
      if(m%n==0)puts("YES");else puts("NO");
}