#include <bits/stdc++.h>
using namespace std;
const int N=205;
int p[N];
bool vis[N];
vector<int>adj[N];
pair<double,double> arr[105];
int n,m,s,v;
double cal(double x,double y,double xx,double yy){
   return sqrt(abs(x-xx)*abs(x-xx)+abs(y-yy)*abs(y-yy));
}
void join(double a,double b,int pos){
     for(int i=0;i<n;i++){
          if(s>=cal(arr[i].first,arr[i].second,a,b)/(double)v){
             adj[i].push_back(pos);
          }
     }
}
int solve(int v){
     if(vis[v])return 0;
     vis[v]=1;
     for(int i=0;i<(int)adj[v].size();i++){
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
     while(scanf("%d %d %d %d",&n,&m,&s,&v)==4){
         memset(adj,0,sizeof(adj));
         double a,b;
         for(int i=0;i<n;i++){
            scanf("%lf %lf",&a,&b);
            arr[i].first=a;
            arr[i].second=b;
         }
         for(int i=n;i<n+m;i++){
             scanf("%lf %lf",&a,&b);
             join(a,b,i);
         }
         int ans=0;
         memset(p,-1,sizeof(p));
         for(int i=0;i<n;i++){
            memset(vis,0,sizeof(vis));
            if(p[i]==-1)
            ans+=solve(i);
         }
          printf("%d\n",n-ans);
     }
}
