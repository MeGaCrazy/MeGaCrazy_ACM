#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#define Min(a,b)  ((a)<(b)?(a):(b))
using namespace std;
typedef vector<int>vi;
vi ans,tmp;
double adj[11][11];
in tx[11],y[11],memo[10][1<<9],n;
int solve(int pos,int bitmask){
     if(bitmask==(1<<n)-1){
        ans=tmp;
        return 0;
     }
    if(memo[pos][bitmask]!=-1)
             return memo[pos][bitmask];
      int ans=2e9;
     for(int i=0;i<n;i++){
         if(i!=pos&& !(bitmask&(1<<i))){
              tmp.push_back(i);
              ans=min(ans,adj[pos][i]+solve(i,bitmask|(1<<i)));
              tmp.pop_back();
           }                                      
    } 
  return memo[pos][bitmask]=ans;
}
int main(){
   freopen("in.txt","r",stdin);
   while(scanf("%d",&n),n){
      for(int i=0;i<n;i++){
         scanf("%d %d",&x[i],&y[i]);
      }
       tmp.clear();
       tmp.push_back(0);
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
          adj[i][j]= sqrt(pow(abs(x[i]-x[j]),2)+pow(abs(y[i]-y[j]),2))+16;
         }
     }
    printf("%d\n",solve(0,1));
    int sz=ans.size();
    for(int i=0;i<sz;i++){
    printf("%d %d to %d %d  equal %d\n",x[ans[i]],y[ans[i]],x[ans[i+1]],y[ans[i+1]],adj[ans[i]][ans[i+1]]);
    }


 }










}
