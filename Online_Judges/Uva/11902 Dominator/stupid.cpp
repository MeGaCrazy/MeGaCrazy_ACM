#include <stdio.h>
#include <vector>
#include <string.h>
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
int arr[105][105],n;
int ulitiz(){




}




int main(){
#ifndef ONLINE_JUDGE
  freopen("in.txt","r",stdin);
#endif
     int t,a;
     scanf("%d",&t);
     while(t--){
       scanf("%d",&n);
        adj.assign(n+1,vi());
       for(int i=1;i<=n;i++){
          for(int j=1;j<=n;j++){
             scanf("%d",&a);
             if(a==1)adj[i].push_back(j);
          }         
       }
     
     
     
     
     
     }



}