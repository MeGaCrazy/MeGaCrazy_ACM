#include <bits/stdc++.h>
using namespace std;
const int N=30;
int adj[N*N][N*N];
int main(){
#ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
#endif
        int t,cas=1;
        scanf("%d",&t);
        while(t--){
             int n,m;
             scanf("%d %d",&n,&m);
             //clear
             int split=n;
             int tt=n+m;
             for(int i=0;i<tt;i++){
                for(int j=0;j<tt;j++){
                   adj[i][j]=1e9;
                }
                adj[i][i]=0;
             } 
             for(int i=0,a,b;i<m;i++){
                scanf("%d %d",&a,&b);
                 adj[a][split]=adj[split][b]=1;
                 adj[b][split]=adj[split][a]=1;
                 split++;
             }
            for(int k=0;k<tt;k++){
                for(int i=0;i<tt;i++){
                   for(int j=0;j<tt;j++){
                     adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
                   }
                }
            }
             int ans=1e9;
             for(int i=0;i<tt;i++){
                int bla=0;
                for(int j=0;j<n;j++)bla=max(bla,adj[i][j]);
                ans=min(ans,bla);
             }
              printf("Case #%d:\n%d\n\n",cas++,ans);
        }     
}
