#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>
#include <string.h>
using namespace std;
typedef pair<int,int>ii;
typedef vector<int>vi;
vector< pair<int,int> >mst[1005]; 
vector<pair<int,ii> >edges;
int n,s,q,ans;
bool visit[1005];

class UFDS{
private:vi p,rank;
public:
   UFDS(int n){
      p.assign(n,0),rank.assign(n,0);
      for(int i=0;i<n;i++){p[i]=i,rank[1];}
   }
   int findSet(int i){
    return p[i]==i?i:p[i]=findSet(p[i]);
   }
  bool isSame(int i, int j){
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
void MST(UFDS &uf){
     int a,b,w;
     for(int i=0;i<s;i++){
       scanf("%d %d %d",&a,&b,&w);
       edges.push_back(make_pair(w,make_pair(a,b)));
    }
    sort(edges.begin(),edges.end());
    int cnt=0;
    for(int i=0;i<s;i++){
      pair<int,ii > t=edges[i];
      if(!uf.isSame(t.second.first,t.second.second)){
          uf.join(t.second.first,t.second.second);
          cnt++;
          mst[t.second.first].push_back(make_pair(t.second.second,t.first));
          mst[t.second.second].push_back(make_pair(t.second.first,t.first));
      }
      if(cnt==n-1)break;    
  }
}
bool solve(int from,int to){
    if(from==to)return true;
     visit[from]=1;
     bool found=false;
     for(int i=0;i<(int)mst[from].size()&&!found;i++){
      if(!visit[mst[from][i].first]){
         found=solve(mst[from][i].first,to);
         if(found)ans=max(ans,mst[from][i].second);
      }
   
  }
return found;
}
                                
int main(){
   int cas=1;
   #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
   #endif
   while(scanf("%d %d %d",&n,&s,&q)){
     if(!s&&!n&&!q)break;
     if(cas!=1)printf("\n");
     UFDS uf(n+1);
     edges.clear();
     memset(mst,0,sizeof(mst));
     MST(uf);

   printf("Case #%d\n",cas++);
      // start queries
    for(int i=0,a,b;i<q;i++){
      scanf("%d %d",&a,&b);
       if(!uf.isSame(a,b)){printf("no path\n");}
       else{
         memset(visit,0,sizeof(visit));
         ans=0;
         if( solve(a,b))printf("%d\n",ans);
        } 
     
  }
   
 }

}