#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stack>
using namespace std;
int d[31],d2[31],g[31],w,t,n,memo[31][1001];
void solve(){
   for(int i=1;i<=n;i++){
      for(int j=1;j<=t;j++){
         if(d[i]>j){
            memo[i][j]=memo[i-1][j];
            }else{
            memo[i][j]=max(g[i]+memo[i-1][j-d[i]],memo[i-1][j]);
           }
        } 
  }
}
void print(){
  printf("%d\n",memo[n][t]);
  stack<int>s;
  for(int i=n,j=t;j>0&&i>0;i--){
        if(memo[i][j]!=memo[i-1][j]){
            s.push(i);
            j-=i;   
         } 
    }
 while(!s.empty()){
    printf("%d %d\n",d2[s.top()],g[s.top()]);
           s.pop();
     }
  
}
int main(){
     freopen("in.txt","r",stdin);
     while(scanf("%d%d",&t,&w)!=EOF){
        memset(memo,0,sizeof(memo));
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
           scanf("%d %d",&d2[i],&g[i]);
           d[i]=3*w*d2[i];
        }
        solve();
        print();
            
   }
}