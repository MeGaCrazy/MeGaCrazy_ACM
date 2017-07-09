#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
typedef vector<int>vi;
typedef vector<pair<int,int> >vii;
typedef vector<vi>vvi;
vvi adj;
vii ans;
#define unvisit -1
int ftvisit[10005],ltvisit[10005],parent[10005],dfsroot,dfschild,cnt;
int crit[10005];
void dfs(int v){
       ftvisit[v]=ltvisit[v]=cnt++;
       for(int i=0;i<(int)adj[v].size();i++){
          int a=adj[v][i];
          if(ftvisit[a]==unvisit){
             parent[a]=v;
             if(v==dfsroot)dfschild++;
             dfs(a);
             if(ltvisit[a]>=ftvisit[v]){
                crit[v]++;
             }
             ltvisit[v]=min(ltvisit[v],ltvisit[a]);
          }else if(a!=parent[v]){
           ltvisit[v]=min(ltvisit[v],ftvisit[a]);
          }
       
       }                                                          
}
bool cmp(pair<int,int>a,pair<int,int>b){
  if(a.first==b.first){
      return a.second<b.second;
  }else 
     return a.first>b.first;
}
int main(){
     #ifndef ONLINE_JUDGE
           freopen("in.txt","r",stdin);
     #endif
       int n,m;
       while(scanf("%d %d",&n,&m),n&&m){
        adj.assign(n,vi());
        ans.clear();
        memset(ftvisit,-1,sizeof(ftvisit));
        memset(ltvisit,-1,sizeof(ltvisit));
        memset(parent,-1,sizeof(parent));
        memset(crit,0,sizeof(crit));
        int a,b;
        while(scanf("%d%d",&a,&b),a!=-1&&b!=-1){
       
           adj[a].push_back(b);
           adj[b].push_back(a);
      
        }
        cnt=0;
        for(int i=0;i<n;i++){
           if(ftvisit[i]==unvisit){
               dfsroot=i,dfschild=0;
               dfs(i);
               crit[dfsroot]=dfschild>1;
           } 
       }
       for(int i=0;i<n;i++){
            crit[i]++;
           ans.push_back(make_pair(crit[i],i));
              
       } 
        sort(ans.begin(),ans.end(),cmp);
        for(int i=0;i<(int)ans.size()&&m--;i++){
           printf("%d %d\n",ans[i].second,ans[i].first);
        }printf("\n");       
  }
}
