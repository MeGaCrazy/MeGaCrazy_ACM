#include <stdio.h>
#include <vector>
#include <queue>
#include <string.h>
#include <utility>
#define inf 2e9
using namespace std;
typedef pair<int,int>ii;
const int N=1005;
const int x[]={0,0,1,-1};
const int y[]={1,-1,0,0};


int arr[N][N],dis[N][N];
int n,m;
inline bool check( ii a){
 if(a.first>=n||a.first<0||a.second>=m||a.second<0)return 0;
 return 1; 
}
int solve(ii sr,ii dist){
   priority_queue<pair<int,ii >,vector<pair<int,ii > >,greater<pair<int,ii > > >pq;
   pq.push(make_pair(arr[sr.first][sr.second],make_pair(sr.first,sr.second)));
   int ans=1e9;
   dis[sr.first][sr.second]=arr[sr.first][sr.second];
   while(!pq.empty()){
      pair<int,ii>u=pq.top();pq.pop();
      if(u.first>dis[u.second.first][u.second.second])continue;
      for(int i=0;i<4;i++){
       int a=u.second.first+x[i],b=u.second.second+y[i];
       if(!check(ii(a,b)))continue;
       if((arr[a][b]+u.first)<dis[a][b]){
        dis[a][b]=arr[a][b]+u.first;
        pq.push(make_pair(dis[a][b],make_pair(a,b)));
       
      }  
   }
   
 }
}
int main(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r",stdin);
     #endif
     int t;
     scanf("%d",&t);
     while(t--){
       scanf("%d %d",&n,&m);
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         scanf("%d",&arr[i][j]);
         }
       }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          dis[i][j]=inf;
         }
       }
       solve(ii(0,0),ii(n-1,m-1));
       printf("%d\n",dis[n-1][m-1]);
     
     }

}
