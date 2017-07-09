#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int>vi;

class UFDS{
private:vi p,rank;
public:
       UFDS(int n){
          p.assign(n,0),rank.assign(n,0);
          for(int i=0;i<n;i++){p[i]=i,rank[i]=1;}
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
   while(scanf("%d %d",&m,&n),(m||n)){
      int allwe=0,a,b,w;
      vector<pair<int,pair<int,int > > >edgelist;
      UFDS uf(n);
      for(int i=0;i<n;i++){
         scanf("%d %d %d",&a,&b,&w);
         edgelist.push_back(make_pair(w,make_pair(a,b)));
         allwe+=w;
      }
      int ans=0,cnt=0;
      sort(edgelist.begin(),edgelist.end());
      for(int i=0;i<(int)edgelist.size();i++){
        pair<int,pair<int,int> > a=edgelist[i];
        if(!uf.isSame(a.second.first,a.second.second)){
           cnt++;
           ans+=a.first;
           uf.join(a.second.first,a.second.second);
           if(cnt==n-1)break;
        }
     }
    printf("%d\n",allwe-ans);
   }
}