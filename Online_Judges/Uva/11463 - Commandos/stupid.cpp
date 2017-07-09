#include <bits/stdc++.h>
using namespace std;
const int N=105;
int arr[N][N];
#define inf 1e9
int main(){
    #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
    #endif
    int t,cas=1;
    scanf("%d",&t);
    while(t--){
       printf("Case %d: ",cas++);
       int n,r;
       scanf("%d",&n,&r);
       for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            arr[i][j]=inf;
          }       
       }
       for(int i=0,a,b;i<r;i++){
         scanf("%d %d",&a,&b);
         arr[a][b]=arr[b][a]=1;
       }
      int s,d;
      scanf("%d %d",&s,&d);
      for(int k=0;k<n;k++){
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
             if(k!=i&&k!=j)
             arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);  
            }
         }      
      }
      printf("%d\n",arr[s][d]);
    }
}