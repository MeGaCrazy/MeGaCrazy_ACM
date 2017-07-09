#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
vi sum;
int cnt;
bool flag[50005];
int dfs(int c){
    if(sum[c]!=0)return sum[c];
    flag[c]=1;
    int tot=0;
    for(int i=0;i<(int)adj[c].size();i++){
         if(flag[adj[c][i]]==0){
          tot+=1+dfs(adj[c][i]);    
         }
    }
    return sum[c]=tot;
}
int  main(){

#ifndef ONLINE_JUDGE
   freopen("in.txt","r",stdin);
#endif
    int t,cas=1;
    scanf("%d",&t);
    while(t--){
      int n,a,b;
      scanf("%d",&n);
      adj.assign(n+1,vi());
      sum.assign(n+5,0);
      for(int i=0;i<n;i++){
         scanf("%d%d",&a,&b);
         adj[a].push_back(b);      
      }
      int tmp=0,ans=0;
      memset(flag,0,sizeof(flag));
      for(int i=1;i<=n;i++){
          cnt=0;
          dfs(i);
          if(cnt>tmp){
            tmp=cnt;
            ans=i;
          }      
      }
   printf("Case %d: %d\n",cas++,ans);   
  }
}