#include <bits/stdc++.h>
using namespace std;
#define inf 1e9
const int N=105;
int adj[N][N],adj2[N][N];
bool visit[N];
#define inf 1e9



int main(){
#ifndef ONLINE_JUDGE
       freopen("in.txt","r",stdin);
#endif
       int t;
       scanf("%d",&t);
       while(t--){
            memset(visit,0,sizeof(visit));
            int n,rcat,rmouse;
            scanf("%d %d %d",&n,&rcat,&rmouse);
            for(int i=1;i<=n;i++){
               for(int j=1;j<=n;j++){
                  adj[i][j]=adj2[i][j]=inf;
               }            
            }
            adj[rcat][rcat]=adj2[rmouse][rmouse]=inf;
            string s;
            cin.ignore();
            
            int a,b;
            bool f=false;
            while(getline(cin,s),!s.empty()){
                 istringstream in(s);
                 in>>a>>b;
                 if(a==-1){f=true;continue;}
                 if(f){
                    adj2[a][b]=1;                 
                 }else{
                    adj[a][b]=1;
                 }
                 s="";            
            }
            // get_common_paths
            for(int k=1;k<=n;k++){
               for(int i=1;i<=n;i++){
                  for(int j=1;j<=n;j++){
                     if(adj[i][j]>adj[i][k]+adj[k][j]){
                        adj[i][j]=adj[i][k]+adj[k][j];
                        visit[k]=1;
                     }                  
                  }
               }            
            }
            bool ans=0;
            for(int k=1;k<=n;k++){
               for(int i=1;i<=n;i++){
                  for(int j=1;j<=n;j++){
                     if(adj2[i][j]>adj2[i][k]+adj2[k][j]){
                        adj2[i][j]=adj2[i][k]+adj2[k][j];
                        if(visit[k]==1)ans=true;
                     }                  
                  }
               }            
            }
            ans==true?printf("Y "):printf("N ");
            if(adj2[rmouse][rmouse]>=2)printf("Y\n");else printf("N\n");
            if(t)printf("\n");
       }

}