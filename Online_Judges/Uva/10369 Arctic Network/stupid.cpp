#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <utility>
#include <math.h>
using namespace std;
typedef vector<int>vi;
typedef pair<int,int>ii;
int x[1005],y[1005];

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
   return ((double)sqrt( (double)abs(x[i]-x[j])*abs(x[i]-x[j]) + (double)abs(y[i]-y[j])*abs(y[i]-y[j])));
}
bool cmp(pair<double,ii> a,pair<double,ii> b ) {
  return a.first-b.first < 1e-9;
}
int main(){
      #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
      #endif
 
      int t,n,s;
      scanf("%d",&t);
      while(t--){
         scanf("%d %d",&n,&s);
         vector<pair<double,ii> >edges;
          UFDS uf(s+1);
           for(int i=0;i<s;i++){
              scanf("%d %d",&x[i],&y[i]);
           }


          for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
              edges.push_back(make_pair(dis(i,j),make_pair(i,j)));
            }   
          }

          sort(edges.begin(),edges.end(),cmp);
          int sz=edges.size();
          double ans=99999999;
          
          for(int i=0;i<sz&&n!=s;i++){
             pair<double,ii>a=edges[i];
               // printf("%.2f\n",a.first);
             if(!uf.isSame(a.second.first,a.second.second)){
               uf.join(a.second.first,a.second.second);
               ans=a.first;
               s--;
                
             }          
          }
         printf("%.2f\n",ans);
      }

}
