#include <stdio.h>
#include <map>
#include <string.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
vi mystack;
int ftvisit[30],ltvisit[30],cnt;
bool instack[30];
char arr[30][30],s1[30],s2[30];
#define unvisit  -1
void dfs(int v){
   ftvisit[v]=ltvisit[v]=cnt++;
   instack[v]=1;
   mystack.push_back(v);
   for(int i=0;i<(int)adj[v].size();i++){
         int a=adj[v][i];
         if(ftvisit[a]==unvisit){
            dfs(a);
           ltvisit[v]=min(ltvisit[v],ltvisit[a]);
         }else if(instack[a]){
           ltvisit[v]=min(ltvisit[v],ftvisit[a]);
         }
  }
  if(ftvisit[v]==ltvisit[v]){
      while(1){
         int x=mystack.back();
         mystack.pop_back();
         instack[x]=0;
        if(x==v){
           printf("%s\n",arr[x]);
          break;
        }else printf("%s, ",arr[x]);
   }
  }
}
int main(){
   #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
   #endif
      int n,m,cas=1;
      while(scanf("%d %d",&n,&m),n&&m){
          adj.assign(n+1,vi());
          memset(ftvisit,-1,sizeof(ftvisit));
          memset(instack,0,sizeof(instack));
          map<string,int>mp;
          int num=0;
          for(int i=0;i<m;i++){
             scanf("%s %s",&s1,&s2);
             int a=(mp[s1]==0)?mp[s1]=++num:mp[s1];
             int b=(mp[s2]==0)?mp[s2]=++num:mp[s2];
             strcpy(arr[a],s1); strcpy(arr[b],s2);
             adj[a].push_back(b);
          }
          cnt=0;
          if(cas>1)printf("\n");
          printf("Calling circles for data set %d:\n",cas++);
          for(int i=1;i<=n;i++){
              if(ftvisit[i]==unvisit){
                dfs(i);
              }
          }

              
      }

}