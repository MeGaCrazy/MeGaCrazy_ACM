#include <stdio.h>
#include <vector>
#include <string.h>
#include <utility>
#include <algorithm>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
typedef vector<pair<int,int> >vii;
vvi adj;
vii ans;
#define Min(a,b)     ((a)<=(b)?(a):(b))
#define Max(a,b)     ((a)>=(b)?(a):(b))
#define unvisit -1
int ftvisit[100],lowvisit[100],parent[100],cnt;
void dfs(int v){
   ftvisit[v]=lowvisit[v]=cnt++;
   for(int i=0;i<(int)adj[v].size();i++){
        if(ftvisit[adj[v][i]]==unvisit){
            parent[adj[v][i]]=v;
           dfs(adj[v][i]);
           if(lowvisit[adj[v][i]]>ftvisit[v]){
               ans.push_back(make_pair(Min(v,adj[v][i]),Max(v,adj[v][i])));                
           }
          lowvisit[v]=Min(lowvisit[v],lowvisit[adj[v][i]]);      
         }else if(adj[v][i]!=parent[v]){
          lowvisit[v]=Min(lowvisit[v],ftvisit[adj[v][i]]);
        }   
   }
}
int main(){
    #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
    #endif
     int n;
     while(scanf("%d",&n)!=EOF){
        int boss;
        adj.assign(n,vi());
        ans.clear();
        memset(lowvisit,-1,sizeof(lowvisit));
        memset(ftvisit,-1,sizeof(ftvisit));
        memset(parent,-1,sizeof(parent));
        for(int i=0,sz;i<n;i++){
            scanf("%d (%d)",&boss,&sz);
             for(int i=0,a;i<sz;i++){
                  scanf("%d",&a);
                  adj[boss].push_back(a);
                  adj[a].push_back(boss);
             }
        }
        cnt=0;
        for(int i=0;i<n;i++){
            if(ftvisit[i]==unvisit){
               dfs(i);
            }
        }
        sort(ans.begin(),ans.end());   
        printf("%d critical links\n",(int)ans.size());
        for(int i=0;i<(int)ans.size();i++){
          printf("%d - %d\n",ans[i].first,ans[i].second);         
        }printf("\n");
    }
}