#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
typedef pair<char,int>ci;
int dis[4005][4005];
vector<pair<int,ci> >adj[4005];
int m;
#define inf 2e9
int f(char &ch){
 return ch=='#'?0:ch-'a'+1;
}
int dijkstra(int st,int en ){
    for(int i=0;i<=m;i++){
     for(int j=0;j<=m;j++){
        if(st!=i)dis[i][j]=inf;
        else dis[st][j]=0;
     }
    } 
    priority_queue<pair<int,ci>,vector<pair<int,ci> >,greater<pair<int,ci> > >pq;
    pq.push(make_pair(0,ci('#',1)));
    while(!pq.empty()){
       int from=pq.top().second.second; 
       int cost=pq.top().first;
       char fi_char=pq.top().second.first;
       pq.pop();
       if(from==en)
           return cost; 
       if(cost>dis[from][f(fi_char)])continue;
       for(int i=0;i<(int)adj[from].size();i++){
          int to=adj[from][i].second.second;
          int cost_to=adj[from][i].first;
          char fi_char_to=adj[from][i].second.first;
          if(fi_char_to!=fi_char&&cost+cost_to<dis[to][f(fi_char_to)]){
             dis[to][f(fi_char_to)]=cost+cost_to;
            pq.push(make_pair(dis[to][f(fi_char_to)],ci(fi_char_to,to)));
          }
       }
    
    }
    return inf;
}
int main(){
     #ifndef ONLINE_JUDGE
     freopen("in.txt","r",stdin);
     #endif
      while(scanf("%d",&m),m){
          map<string,int>mp;
          char str1[55]={},str2[55]={},str3[55]={};
          int n=1;
          scanf("%s %s",&str1,&str2);
          mp[str1]=n++;
          mp[str2]=n++;
          memset(adj,0,sizeof(adj));
          for(int i=0;i<m;i++){
            scanf("%s %s %s",&str1,&str2,&str3);
            if(mp[str1]==0)mp[str1]=n++;
            if(mp[str2]==0)mp[str2]=n++;
            int a=mp[str1],b=mp[str2];
            adj[a].push_back(make_pair(strlen(str3),ci(str3[0],b)));
            adj[b].push_back(make_pair(strlen(str3),ci(str3[0],a)));
          }
          int ans=dijkstra(1,2);
          ans>=inf?printf("impossivel\n"):printf("%d\n",ans);
      
      }

}