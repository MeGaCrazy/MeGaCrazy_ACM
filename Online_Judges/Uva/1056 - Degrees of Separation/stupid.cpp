#include <bits/stdc++.h>
using namespace std;
const int N=55;
int adj[N][N];
#define inf 1e9



int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif
    int n,m,cas=1;

    while(scanf("%d %d",&n,&m),(n||m)){
         map<string,int>mp;
         string s1,s2;
         int nodes=1;
         for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
               adj[i][j]=inf;
               adj[i][i]=0;
            }
         }
         
         for(int i=0,a,b;i<m;i++){
            cin>>s1>>s2;
            if(mp[s1]==0)mp[s1]=nodes++;
            if(mp[s2]==0)mp[s2]=nodes++;
            a=mp[s1],b=mp[s2];
            adj[a][b]=1;
            adj[b][a]=1;         
         }
        // APSP
        for(int k=1;k<=n;k++){
           for(int i=1;i<=n;i++){
              for(int j=1;j<=n;j++){
                 adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
              }
           }        
        }
        int ans=-1;
        for(int i=1;i<=n;i++){
           for(int j=1;j<=n;j++){
              if(adj[i][j]==inf){ans=-1;break;}
              else if(adj[i][j]>ans){
                  ans=adj[i][j];
              }
           }
        }
        printf("Network %d: ",cas++);
        ans==-1?printf("DISCONNECTED\n"):printf("%d\n",ans);
        printf("\n");
    }
}