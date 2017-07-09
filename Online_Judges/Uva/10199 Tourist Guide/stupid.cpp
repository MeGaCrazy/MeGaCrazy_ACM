#include <stdio.h>
#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
typedef vector<string>vs;
vvi adj;
vs ans;
#define unvisit -1
#define Min(a,b)   ((a)<(b)?(a):(b))
int ftvisit[105],ltvisit[105],parent[105],dfsroot,cnt,dfschild;
bool iscrit[105];
void dfs(int v){
    ftvisit[v]=ltvisit[v]=cnt++;
    for(int i=0;i<(int)adj[v].size();i++){
         int  a=adj[v][i];
        if(ftvisit[a]==unvisit){
           parent[a]=v;        
          if(v==dfsroot)dfschild++;
          dfs(a);
          if(ltvisit[a]>=ftvisit[v]){
            iscrit[v]=1;          
          }
          ltvisit[v]=Min(ltvisit[v],ltvisit[a]);
        }else if(a!=parent[v]){
            ltvisit[v]=Min(ltvisit[v],ftvisit[a]);        
        }    
    
   }
}
int main(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r",stdin);
     #endif              
     int n,cas=1;
     while(scanf("%d",&n),n){
          char s[105][35]={};
          map<string,int>mp;
          memset(ftvisit,-1,sizeof(ftvisit));
          memset(ltvisit,-1,sizeof(ltvisit));
          memset(iscrit,0,sizeof(iscrit));
          ans.clear();
          adj.assign(n,vi());
          for(int i=0;i<n;i++){
           scanf("%s",&s[i]);
           mp[s[i]]=i;
          }
          int r;
          scanf("%d",&r);
          char arr1[35]={},arr2[35]={};
          for(int i=0;i<r;i++){
              scanf("%s %s",&arr1,&arr2);
              int a=mp[arr1],b=mp[arr2];
              adj[a].push_back(b);
              adj[b].push_back(a);
          }
         cnt=0;
         for(int i=0;i<n;i++){
             dfschild=0,dfsroot=i;
            if(ftvisit[i]==unvisit){
                 dfs(i);
             iscrit[dfsroot]=dfschild>1;
             }
          
         }
        int bla=0;
        for(int i=0;i<n;i++){
          if(iscrit[i]==1){
            ans.push_back(s[i]);
            bla++;
          }
        
       }
         if(cas!=1)printf("\n");
         sort(ans.begin(),ans.end());
        printf("City map #%d: %d camera(s) found\n",cas++,bla);
        for(int i=0;i<(int)ans.size();i++){
           cout<<ans[i].c_str()<<endl;

        }
     }
}