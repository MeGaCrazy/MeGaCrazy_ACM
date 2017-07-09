#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <time.h>
using namespace std;
int memo[11][1<<11],x[11],y[11],n,adj[11][11];
int solve(int pos,int bitmask){
   if(bitmask==(1<<n+1)-1)
         return adj[pos][0];
   if(memo[pos][bitmask]!=-1)
         return memo[pos][bitmask];
   int ans=2e9;
   for(int i=0;i<=n;i++){
    if(i!=pos&&!(bitmask&(1<<i)))
      ans=min(ans,adj[pos][i]+solve(i,bitmask|(1<<i))); 
   } 
 return memo[pos][bitmask]=ans;
}
int main(){
 	int t;    int q=1;
        freopen("in.txt","r",stdin);
        freopen("out","w",stdout);
 	scanf("%d",&t);
      	while(t--){
       	 int a,b;
         scanf("%d %d",&a,&b);
	 scanf("%d %d",&x[0],&y[0]);
 	 scanf("%d",&n);
         for(int i=1;i<=n;i++)
            scanf("%d %d",&x[i],&y[i]);
         /// manthann distance
         for(int i=0;i<=n;i++){
           for(int j=0;j<=n;j++){
              adj[i][j]=abs(x[i]-x[j])+abs(y[i]-y[j]);
            }
         }
        memset(memo,-1,sizeof(memo));
       printf("The shortest path has length %d\n",solve(0,1));
       fprintf(stderr,"Case %d solved in time =%d ms\n",q++,(int)clock());
    }	
   
}