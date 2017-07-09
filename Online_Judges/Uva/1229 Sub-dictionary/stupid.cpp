#include <stdio.h>
#include <vector>
#include <string.h>
#include <string>
#include <map>
#include <algorithm>
#include <sstream>
#include <iostream>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj,ans;
vi myst,word;
int ftvisit[105],ltvisit[105],instack[105],cnt,scc_cnt,ilag;
string arr[105];
#define unvisit  -1
void dfs(int v){
   ftvisit[v]=ltvisit[v]=cnt++;
   instack[v]=1;
   myst.push_back(v);
   for(int i=0;i<(int)adj[v].size();i++){
        int a=adj[v][i];
        if(ftvisit[a]==unvisit){
            dfs(a);
         ltvisit[v]=min(ltvisit[v],ltvisit[a]);
        }else if(instack[a]){
          ltvisit[v]=min(ltvisit[v],ftvisit[a]);
        }   
  }
  if(ltvisit[v]==ftvisit[v]){
     while(1){
       int a=myst.back();
       myst.pop_back();
       instack[a]=0;
       ans[scc_cnt].push_back(a);
       if(a==v)break;
     }
     scc_cnt++;
  }
}
void dfs1(int v){
 if(!instack[v]){
  word.push_back(v);
  instack[v]=1;
  for(int i=0;i<(int)adj[v].size();i++){
    dfs(adj[v][i]);
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
         ans.assign(n+1,vi());
         myst.clear();
         memset(ftvisit,-1,sizeof(ftvisit));
         memset(instack,0,sizeof(instack));
         string s,r;
         int num=0;
         map<string,int>mp;
         for(int i=0;i<n;i++){
            getline(cin,s);
            istringstream in(s);
            in>>r;
            int a=(mp[r]==0)?mp[r]=++num:mp[r];
            arr[a]=r;
           while(in>>r){
            int b=(mp[r]==0)?mp[r]=++num:mp[r];
            arr[b]=r;
            adj[a].push_back(b);
           }
       }
       cnt=0,scc_cnt=0;
       for(int i=1;i<=n;i++){
          if(ftvisit[i]==unvisit){
            dfs(i);
          }
       }
       for(int i=0;i<scc_cnt;i++){
         if(ans[i].size()>1)dfs1(ans[i][0]);
       }
     //  sort(word.begin(),word.end());
       for(int i=0;i<(int)word.size();i++){
           if(i!=0)printf(" ");
           cout<<arr[word[i]];
       }printf("\n");
  }
}