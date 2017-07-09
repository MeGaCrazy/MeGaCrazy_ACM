#include <bits/stdc++.h>
using namespace std;
const int N=35;
int adj[N][N];
#define inf 1e9





int main(){
#ifndef ONLINE_JUDGE
     freopen("in.txt","r",stdin);
#endif
       int n,cas=0;
       while(scanf("%d",&n)!=EOF){
           memset(adj,0,sizeof(adj));
           int num=0;
           for(int i=0,a,b;i<n;i++){
               scanf("%d %d",&a,&b);
               num=max(num,max(a,b));
               adj[a][b]=1;
           }
           for(int k=0;k<=num;k++){
              for(int i=0;i<=num;i++){
                 for(int j=0;j<=num;j++){
                    if(adj[i][k]&&adj[k][j]){
                       adj[i][j]+=adj[i][k]*adj[k][j];
                    }
                 }
              }   
           }

           for(int k=0;k<=num;k++){
              if(adj[k][k])
              for(int i=0;i<=num;i++){
                 for(int j=0;j<=num;j++){
                    if(adj[i][k]&&adj[k][j]){
                       adj[i][j]=-1;
                    }
                 }
              }   
           }
           printf("matrix for city %d\n",cas++);
           for(int i=0;i<=num;i++){
              for(int j=0;j<=num;j++){
                printf(j==0?"%d":" %d",adj[i][j]);
              }printf("\n");
           }       
       }
}