#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
typedef vector<int>vi;
class UFDS{
private:vi p,rank;
public: 
       UFDS(int n){
        p.assign(n,0),rank.assign(n,0);
         for(int i=0;i<n;i++){
           p[i]=i,rank[i]=1;
         }
       }
       int findSet(int i){
        return i==p[i]?i:p[i]=findSet(p[i]);
       }
       bool isSame(int i,int j){
        return findSet(i)==findSet(j);
       }
       void join(int i,int j){
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
     int n,m;
     while(scanf("%d %d",&n,&m),(n||m)){
      vector<pair<int,pair<int,int> > >edgelist;
      UFDS uf(n);
      int a,b,w;
      for(int i=0;i<m;i++){
         scanf("%d %d %d",&a,&b,&w);
         edgelist.push_back(make_pair(w,make_pair(a,b)));
      }
      vi ans;  int cnt=0;
      sort(edgelist.begin(),edgelist.end());
      for(int i=0;i<(int)edgelist.size();i++){
        pair<int,pair<int,int> > a=edgelist[i];
        if(!uf.isSame(a.second.first,a.second.second)){
          cnt++;
          uf.join(a.second.first,a.second.second);
        }else ans.push_back(a.first);
    }
    if(ans.size()==0){printf("forest\n");}
    else{

    sort(ans.begin(),ans.end());
    for(int i=0;i<(int)ans.size();i++){
       printf(i==0?"%d":" %d",ans[i]);
     }printf("\n");

  } 
     
 }
}