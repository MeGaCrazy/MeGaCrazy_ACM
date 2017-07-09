#include <bits/stdc++.h>
using namespace std;
const int N=25;
double adj[N][N];
int p[N][N];
int path_length(int i,int j,int cnt){
   
  if(i!=j){
    path_length(i,p[i][j],cnt);
    cnt++;
   }
  return cnt;
}
void print_path(int i,int j){
  if(i!=j)print_path(i,p[i][j]);
  printf(i==j?"%d":" %d",j);
}
int main(){
#ifndef ONLINE_JUDGE
     freopen("in.txt","r",stdin);
#endif
      int n;
      while(scanf("%d",&n)!=EOF){
           for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i==j)adj[i][j]=1.0;
                    else scanf("%lf",&adj[i][j]);
                }        
           }
           for(int i=1;i<=n;i++){
               for(int j=1;j<=n;j++){
                   p[i][j]=i;
              }
           }
          double minv=2e9;
          for(int k=1;k<=n;k++){
              for(int i=1;i<=n;i++){
                  for(int j=1;j<=n;j++){
                      if(adj[i][j]>adj[i][k]+adj[k][j]){
                         adj[i][j]=adj[i][k]+adj[k][j];
                         p[i][j]=p[k][j];
                         if(adj[i][j]<minv){
                          minv=adj[i][j];
                         }
                      }
                  }              
              }          
          }
         int ansi=0,ansj=0,cntans=2e9;
         for(int i=1;i<=n;i++){
             for(int j=1;j<=n;j++){
                 if(adj[i][j]==minv){
                    int cnt=0;
                    cnt=path_length(i,j,cnt);
                    if(cntans>cnt){
                       cntans=cnt;
                       ansi=i;
                       ansj=j;
                    }                 
                 }
             }            
         } 
        print_path(ansi,ansj);
      
      }
}