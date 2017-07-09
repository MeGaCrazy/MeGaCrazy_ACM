#include <stdio.h>
#include <iostream>
#include <string.h>
#include <map>
#include <vector>
#include <string>
#include <queue>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vi ans;
vvi adj;
int indegree[105],n,m;
void solve(){
     priority_queue<int,vi,greater<int> >pq;
     for(int i=0;i<n;i++){
         if(indegree[i]==0)pq.push(i);
     }
     while(!pq.empty()){
       int a=pq.top();
       ans.push_back(a);
       pq.pop();
       for(int i=0;i<(int)adj[a].size();i++){
           indegree[adj[a][i]]--;
           if(indegree[adj[a][i]]==0)pq.push(adj[a][i]);
       }
     
     }
}
int  main(){
      #ifndef ONLINE_JUDGE
            freopen("in.txt","r",stdin);
      #endif

       int cas=1;
      while(scanf("%d",&n)!=EOF){
         char str[105][55]={};
         map<string ,int>mp;
         ans.clear();
         memset(indegree,0,sizeof(indegree));
         adj.assign(n,vi());
         for(int i=0;i<n;i++){
             scanf("%s",&str[i]);
              mp[str[i]]=i;
         }
         scanf("%d",&m);
         char a[55]={},b[55]={};
         for(int i=0;i<m;i++){
             scanf("%s %s",&a,&b);
             int a1=mp[string(a)],b1=mp[string(b)];
             indegree[b1]++;
             adj[a1].push_back(b1);
         }
         solve();
        printf("Case #%d: Dilbert should drink beverages in this order: ",cas++);
        for(int i=0;i<(int)ans.size()-1;i++){
           printf("%s ",str[ans[i]]);
         }printf("%s.\n\n",str[ans.back()]);
      
      }

}