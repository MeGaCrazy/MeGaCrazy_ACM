	#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string.h>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
#define unvisit -1
int ftvisit[105],lowvisit[105],parent[105],cnt,dfsroot,rootchild;
bool iscrit[105];
void dfs(int v){
     ftvisit[v]=lowvisit[v]=cnt++;
     for(int i=0;i<(int)adj[v].size();i++){
         if(ftvisit[adj[v][i]]==unvisit){
             parent[adj[v][i]]=v;
             if(v==dfsroot)rootchild++;
             dfs(adj[v][i]);
             if(lowvisit[adj[v][i]]>=ftvisit[v]){
                iscrit[v]=1;
             }
           lowvisit[v]=min(lowvisit[v],lowvisit[adj[v][i]]);
         }else if(adj[v][i]!=parent[v]){
           lowvisit[v]=min(lowvisit[v],ftvisit[adj[v][i]]);
         }
     }
}
int main(){
    #ifndef ONLINE_JUDGE
       freopen("in.txt","r",stdin);
    #endif
    int n;
    while(scanf("%d",&n),n){
      adj.assign(n+1,vi());
      memset(iscrit,0,sizeof(iscrit));
      memset(ftvisit,-1,sizeof(ftvisit));
      memset(lowvisit,-1,sizeof(lowvisit));
      string s;
          	
      while(getline(cin,s),s[0]!='0'&&n){
           istringstream in(s);
           int boss,a;
           in>>boss;
           while(in>>a){
            adj[boss].push_back(a);
            adj[a].push_back(boss);
           }      
      }
     for(int i=1;i<=n;i++){
       if(ftvisit[i]==unvisit){
         rootchild=0,dfsroot=i;
         dfs(i);
         iscrit[i]=rootchild>1;
       } 
    }
   int ans=0;
   for(int i=1;i<=n;i++){
     if(iscrit[i]==1){
       ans++;
     }
   
  } 
  printf("%d\n",ans);  
 }
}