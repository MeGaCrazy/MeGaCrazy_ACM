#include <bits/stdc++.h>
using namespace std;


int main(){
int d,u,v;
int t,cas=1;
      scanf("%d",&t) ;
      while(t--){
       scanf("%d %d %d",&d,&v,&u);
       printf("Case %d: ",cas++);
        if(u==0||v==0||v>=u){
          printf("can't determine\n");
          continue;
        }
        double path1=(double)d/(double)u;
        double path2=(double)d/(double)sqrt(u*u-v*v);
        printf("%.3f\n",abs(path2-path1));     
      }
}