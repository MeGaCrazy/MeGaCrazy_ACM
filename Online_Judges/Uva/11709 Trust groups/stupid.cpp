#include <stdio.h>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
vi st;
int ftvisit[1005],ltvisit[1005],cnt,scc_cnt;
bool instack[1005];
void dfs(int v){
     ftvisit[v]=ltvisit[v]=cnt++;
     instack[v]=1;
     st.push_back(v);
     for(int i=0;i<(int)adj[v].size();i++){
         int a=adj[v][i];
         if(ftvisit[a]==-1){
           dfs(a);
           ltvisit[v]=min(ltvisit[v],ltvisit[a]);
         }else if(instack[a]){
           ltvisit[v]=min(ltvisit[v],ftvisit[a]);
         }
    }
  if(ltvisit[v]==ftvisit[v]){
     while(1){
      int a=st.back();
      instack[a]=0;
      st.pop_back();
      if(v==a)break;
     }scc_cnt++;  
  }
}
int main(){
    #ifndef ONLINE_JUDGE
          freopen("in.txt","r",stdin);
    #endif
     int n,m;
     while(scanf("%d %d",&n,&m)){
         if(!n&&!m)break;
         adj.assign(n,vi());
         st.clear();
        map<string,int>mp;
        char s1[50]={},s2[50]={};
        getchar();
        for(int i=0;i<n;i++){
           instack[i]=0;
           ftvisit[i]=-1;
           ltvisit[i]=-1;
            gets(s1);
            mp[s1]=i;
        }
       cnt=0,scc_cnt=0;
       for(int i=0;i<m;i++){
          gets(s1);
          gets(s2);
          adj[mp[s1]].push_back(mp[s2]);
       }
      for(int i=0;i<n;i++){
        if(ftvisit[i]==-1){
           dfs(i);
        }
     }
     printf("%d\n",scc_cnt);     
   }

}