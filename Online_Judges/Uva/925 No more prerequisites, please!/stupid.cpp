#include <bits/stdc++.h>
using namespace std;
const int N=125;
int adj[N][N];
int p[N];
#define inf 1e9

int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif
        int t;
        scanf("%d",&t);
        while(t--){
            map<string,int>mp;
            int nodes=1;
            int n;
            scanf("%d",&n);
            for(int i=0;i<=n;i++){
                for(int j=0;j<=n;j++){
                  adj[i][j]=inf;
                  p[i]=-1;
                }
            }

            char s1[25]={};
            string str[120]={};
            for(int i=0;i<n;i++){
               scanf("%s",&s1);
               mp[s1]=nodes++;           
               str[mp[s1]]=s1;
            }
            int q;
            scanf("%d",&q);
            for(int i=0,a,m,b;i<q;i++){
               scanf("%s",&s1);
               a=mp[s1];
               scanf("%d",&m);
               for(int j=0;j<m;j++){
                  scanf("%s",&s1);
                  b=mp[s1];
                  adj[a][b]=m;
               }
            }
            // APSp
            for(int k=1;k<=n;k++){
              for(int i=1;i<=n;i++){
                 for(int j=1;j<=n;j++){
                    if(adj[i][j]>adj[i][k]+adj[k][j]){
                      adj[i][j]=adj[i][k]+adj[k][j];
                      p[j]=i;
                    }
                 }
              }            
            }
           vector<vector<int> >ans;
           ans.assign(n+1,vector<int>());
           for(int i=1;i<=n;i++){
                 if(p[i]!=-1){
                  ans[i].push_back(p[i]);
                 }
           }
           for(int i=1;i<=n;i++){
              if(ans[i].size()>1){
                 printf("%s %d",str[i].c_str(),(int)ans.size());
                 for(int j=0;j<(int)ans[i].size();j++){
                    printf(" %s",str[ans[i][j]].c_str());
                }
                printf("\n");
              }
           }
        
        }
}