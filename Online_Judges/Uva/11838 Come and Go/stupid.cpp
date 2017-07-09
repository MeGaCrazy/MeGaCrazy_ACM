#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
vi st;
bool ftvisit[2005],ltvisit[2005],instack[2005],cnt,scc_cnt;
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
      scc_cnt++;
      while(1){
        int a=st.back();
        instack[a]=0;
        st.pop_back();
        if(a==v)break;      
      }
  }
}
int main(){
    #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
    #endif
        int n,m;
        while(scanf("%d %d",&n,&m)){
          if(!n&&!m)break;
          adj.assign(n+1,vi());
          st.clear();
          memset(ftvisit,-1,sizeof(ftvisit));
          memset(ltvisit,-1,sizeof(ltvisit));
          memset(instack,0,sizeof(instack));
          if(!n&&!m)break;
          int a,b,c;        
          for(int i=0;i<m;i++){
            scanf("%d %d %d",&a,&b,&c);
            adj[a].push_back(b);
            if(c==2){
             adj[b].push_back(a);
            }          
          }
         cnt=0,scc_cnt=0;
         for(int i=1;i<=n;i++){
             if(ftvisit[i]==-1&&scc_cnt<=1){
              dfs(i);
             }
         }
          if(scc_cnt>1)printf("1\n");
          else printf("0\n");
      }

}