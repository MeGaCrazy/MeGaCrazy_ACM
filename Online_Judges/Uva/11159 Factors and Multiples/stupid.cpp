#include <bits/stdc++.h>
using namespace std;
const int N=205;
vector<int>adj[N];
int p[N],arr[105];
bool vis[N];
int n,m;
void join(int num,int s){
     for(int i=0;i<n;i++){
        if((num==0&&arr[i]==0)||arr[i]&&num%arr[i]==0)adj[i].push_back(s);
     }
}
int  solve(int v){
    if(vis[v])return 0;
    vis[v]=1;
    for(int i=0;i<adj[v].size();i++){
        int u=adj[v][i];
        if(p[u]==-1||solve(p[u])){
           p[u]=v;return 1;
        }
    }
    return 0;
}
int main(){
#ifndef ONLINE_JUDGE
       freopen("in.txt","r",stdin);
#endif       
         int t,cas=1;
         scanf("%d",&t);
         while(t--){
            memset(adj,0,sizeof(adj));
            scanf("%d",&n);
//            cerr<<"n "<<n<<"case "<<cas<<endl;            
            for(int i=0;i<n;i++){
              scanf("%d",arr+i);
            }
            scanf("%d",&m);
            for(int i=n,a;i<n+m;i++){
                scanf("%d",&a);
                join(a,i);
            }
            int ans=0;
            memset(p,-1,sizeof(p));
//            cerr<<"hello"<<endl;
            for(int i=0;i<n;i++){
               memset(vis,0,sizeof(vis));
               ans+=solve(i);
            }
            printf("Case %d: %d\n",cas++,ans);
         }
}