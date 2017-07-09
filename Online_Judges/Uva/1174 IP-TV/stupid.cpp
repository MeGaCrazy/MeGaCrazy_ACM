#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <iostream>
#include <queue>
#include <utility>
#include <iostream>
using namespace std;
bool visit[2005];
typedef pair<int,int>ii;
typedef vector<ii>vi;
vector<vi >vii;
priority_queue<ii>pr;
void prim(int v){
       visit[v]=1;
      for(int i=0;i<(int)vii[v].size();i++){
         ii a=vii[v][i];
         if(!visit[a.second])pr.push(ii(-a.first,-a.second));
      }

}
int main(){
   #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
   #endif
      int t,n,m;
      scanf("%d",&t);
      while(t--){
       scanf("%d %d",&n,&m);
       memset(visit,0,sizeof(visit));
       vii.assign(n+1,vi());
       map<string,int>mp;
       string a,b;int w,cnt=1;

       for(int i=0;i<m;i++){
        cin>>a>>b>>w;
        if(mp[a]==0){
         mp[a]=cnt++;
        }
        if(mp[b]==0){
         mp[b]=cnt++;
        }
        int x=mp[a],y=mp[b];
        vii[x].push_back(make_pair(w,y));   
      }

      prim(1);
      int ans=0;

      while(!pr.empty()){
         ii a=pr.top();pr.pop();
         int x=-a.first,y=-a.second;
         if(!visit[x]){
           ans+=x;
           prim(y);
         }
    }

    printf("%d\n",ans);
    if(t)printf("\n");
   }
}