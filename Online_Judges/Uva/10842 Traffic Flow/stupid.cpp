#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef vector<int>vi;
typedef pair<int,int>ii;
class ufds{
private:vi p,rank;
public:
    ufds(int n){
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
bool cmp(pair<int,ii >a,pair<int,ii > b ){
  return a.first > b.first;
  }
int main(){
    #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
    #endif
       int t,cas=1;
       scanf("%d",&t);
       while(t--){
         int n,s;
         scanf("%d %d",&n,&s);
         ufds uf(n);
         vector<pair<int,ii> >edges;
         for(int i=0,a,b,w;i<s;i++){
           scanf("%d %d %d",&a,&b,&w);
           edges.push_back(make_pair(w,make_pair(a,b)));
         }
         sort(edges.begin(),edges.end(),cmp);
	 int ans;
         int cnt=0;
         for(int i=0;i<s&&cnt<n-1;i++){
           pair<int,pair<int,int> > a=edges[i];
           if(!uf.isSame(a.second.first,a.second.second)){
              uf.join(a.second.first,a.second.second);
              cnt++;
              ans=a.first;           
           }         
       }
       printf("Case #%d: %d\n",cas++,ans);
       }
}