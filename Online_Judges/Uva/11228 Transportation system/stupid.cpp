#include <stdio.h>
#include <vector>
#include <math.h>
#include <utility>
#include <string.h>
#include <algorithm>
using namespace std;
typedef vector<int>vi;
int x[1005],y[1005];
bool arr[1005][1005];
class uf{
private:vi p,rank;
public: 
       uf(int n){
        p.assign(n,0);rank.assign(n,0);
         for(int i=0;i<n;i++){
            p[i]=i,rank[i]=1;
          }
       }
      int findSet(int i){
         return p[i]==i?i:p[i]=findSet(p[i]);
      }
      bool isSame(int i,int j){
         return findSet(i)==findSet(j);      
      }
      void unionf(int i,int j){
          int x=findSet(i),y=findSet(j);
          if(rank[x]>=rank[y])p[y]=x;
          else p[x]=y;
          if(rank[x]==rank[y])rank[x]++;      
      }
};
int main(){
      #ifndef ONLINE_JUDGE
           freopen("in.txt","r",stdin);
      #endif


      int t,cas=1;
      scanf("%d",&t);
      while(t--){
         int n,r;
         int states=1;
         double ro=0,ra=0;
         scanf("%d %d",&n,&r);
         vector<pair<double,pair<int,int> > >Edgelist;
         uf ufds(n);
         memset(arr,0,sizeof(arr));
         for(int i=0;i<n;i++){
          scanf("%d %d",&x[i],&y[i]);
         }
         for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
             if(arr[j][i]==1||arr[i][j]==1||i==j)continue;
             arr[i][j]=1,arr[j][i]=1;
             double  dis=sqrt(abs(x[i]-x[j])*abs(x[i]-x[j])+abs(y[i]-y[j])*abs(y[i]-y[j]));
             Edgelist.push_back(make_pair(dis,make_pair(i,j)));
           }
        }
        sort(Edgelist.begin(),Edgelist.end());
        int cnt=0;
        for(int i=0;i<(int)Edgelist.size();i++){
          pair<double,pair<int,int> > a=Edgelist[i];
          if(!ufds.isSame(a.second.first,a.second.second)){
            cnt++;
            if(ceil(a.first)<=r){
                ro+=a.first;
            }else{
              ra+=a.first;
              states++;
            }
            ufds.unionf(a.second.first,a.second.second);
           if(cnt==n-1)break;
          }
       }
     printf("Case #%d: %d %.lf %.lf\n",cas++,states,ro,ra);
          
   }
}