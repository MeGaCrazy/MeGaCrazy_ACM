#include <bits/stdc++.h>
using namespace std;
const int N=55;
vector<int>tour;
int n;
int adj[N][N],degree[N];
void solve(int v){
   for(int i=1;i<=50;i++){
       if(adj[v][i]){
          adj[v][i]--,adj[i][v]--;
          solve(i);
       }
   }
   tour.push_back(v);
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
#endif
        int t,cas=1;
        scanf("%d",&t);
        while(t--){
           memset(adj,0,sizeof(adj));
           memset(degree,0,sizeof(degree));
           tour.clear();
           scanf("%d",&n);
           for(int i=0,a,b;i<n;i++){
               scanf("%d %d",&a,&b);
               adj[a][b]++;adj[b][a]++;
               degree[a]++,degree[b]++;
           }
           bool ok=1;
           for(int i=1;i<=50;i++){
              if(degree[i]&1){ok=0;break;}
           }
          printf("Case #%d\n",cas++);
          if(!ok){printf("some beads may be lost\n");}
          else{
            solve(1);
            if(tour.size()!=n+1||tour.back()!=tour[0]){printf("some beads may be lost\n");}
            else{
                  for(int i=0;i<tour.size()-1;i++){
                      printf("%d %d\n",tour[i],tour[i+1]);
                  }
            }
          } 
           if(t)printf("\n");
        }
}           