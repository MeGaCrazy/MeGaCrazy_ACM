#include <bits/stdc++.h>
using namespace std;
const int N=405;
vector<int>adj[N];
char arr[45][15];
int p[N],nums[45][15];
int r,c;
bool vis[N];
int xx[]={0,-1,0,1};
int yy[]={1,0,-1,0};
bool check(int x,int y){
   return x>=0&&x<r&&y>=0&&y<c&&arr[x][y]=='*';
}

int solve(int v){
   if(vis[v])return 0;
    vis[v]=1;
   for(int i=0;i<(int)adj[v].size();i++){
       int u=adj[v][i];
       if(p[u]==-1||solve(p[u])){
           p[v]=u;p[u]=v;return 1;
       }
   }
   return 0;
}

int main(){
#ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
#endif
       int t;
       scanf("%d",&t);
       while(t--){
         int n=1;
         memset(adj,0,sizeof(adj));
         scanf("%d %d",&r,&c);
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){                                                                                                                               
              scanf(" %c",&arr[i][j]);
              nums[i][j]=n++;
            }
         }
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               if(arr[i][j]=='o')continue;
              for(int k=0;k<4;k++){
                 int a=i+xx[k],b=j+yy[k];
                 if(check(a,b)){
                   adj[nums[i][j]].push_back(nums[a][b]);
                 }
              }
            }
          }
          memset(p,-1,sizeof(p));
          int ans=0;
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               if(arr[i][j]=='*'&&p[nums[i][j]]==-1){
                 if(solve(nums[i][j]))ans++;
               }
            }
         }
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               if(arr[i][j]=='*'&&p[nums[i][j]]==-1){
                 ans++;
               }
            }
         }         
          printf("%d\n",(n-1)-ans);
       }
}