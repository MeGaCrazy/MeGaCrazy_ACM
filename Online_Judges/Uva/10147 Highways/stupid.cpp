#include <stdio.h>
#include <vector>
#include <utility>
#include <math.h>
#include <algorithm>
using namespace std;
typedef pair<int,int>ii;
typedef vector<int>vi;
int x[755],y[755];
class UFDS{
private:vi p,rank;
public:
      UFDS(int n){
        p.assign(n,0),rank.assign(n,0);
        for(int i=0;i<n;i++){p[i]=i,rank[i]=1;}
      }
    int findSet(int i){
     return p[i]==i?i:p[i]=findSet(p[i]);
    }
    bool isSame(int i,int j){
     return findSet(i)==findSet(j);
    }
    void join(int i,int j){
      int x=findSet(i);
      int y=findSet(j);
      if(rank[x]>=rank[y])p[y]=x;
      else p[x]=y;
      if(rank[x]==rank[y])rank[x]++;    
    }
};
double dis(int i,int j){

  return (double)sqrt((double)abs((x[i]-x[j])*(x[i]-x[j]))+(double)abs((y[i]-y[j])*(y[i]-y[j])));
}
bool cmp(pair<double,pair<int,int> >a,pair<double,pair<int,int> > b){
 return a.first-b.first < 1e-9;
} 
int main(){
      #ifndef ONLINE_JUDGE
           freopen("in.txt","r",stdin);
      #endif
      int t;
      scanf("%d",&t);
      while(t--){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
          scanf("%d %d",&x[i],&y[i]);
        }
        UFDS uf(n+1);
        vector<pair<double,pair<int,int> > >edges;
        for(int i=1;i<=n;i++){
          for(int j=i+1;j<=n;j++){
            edges.push_back(make_pair(dis(i,j),make_pair(i,j)));
          }
       }
       sort(edges.begin(),edges.end(),cmp);
       int m;
       int cnt=0;
       scanf("%d",&m);
       for(int i=0,a,b;i<m;i++){
        scanf("%d %d",&a,&b);
        if(!uf.isSame(a,b)){
          uf.join(a,b);
          cnt++;
        }       
      }
       if(cnt==n-1)printf("No new highways need\n");
        for(int i=0;i<(int)edges.size()&&cnt<n-1;i++){
        pair<double,pair<int,int> >a=edges[i];
        if(!uf.isSame(a.second.first,a.second.second)){
            cnt++;
           printf("%d %d\n",a.second.first,a.second.second);
           uf.join(a.second.first,a.second.second);
        }
      }
       if(t)printf("\n"); 
    }

}