#include <bits/stdc++.h>
using namespace std;
const int N=105;
vector<int>adj[N];
int m[N];
char o[N];

void solve(int idx,int s){
    if(m[idx]==0){
       for(int i=0;i<s+2;i++){
           printf(" ");
       }
       if(idx==0)printf("project\n");
       else printf("object%d\n",idx);
    }else{
       for(int i=0;i<s;i++){
          printf(" ");
       }
      if(idx==0) printf("%c project\n",o[idx]);
      else{
         printf("%c object%d\n",o[idx],idx);
      }
      if(o[idx]=='-'){
           for(auto v : adj[idx]){
             solve(v,s+2);
       }

   }
 }
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
        freopen("out","w",stdout);
#endif
    int n;
    scanf("%d",&n);
    for(int i=0;i<n+1;i++){
      scanf(" %c %d",&o[i],&m[i]);
      for(int j=0,a;j<m[i];j++){
         scanf("%d",&a);
         adj[i].push_back(a);
      }
    }
    solve(0,0);


          
}