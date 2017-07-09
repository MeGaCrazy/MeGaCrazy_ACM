#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef vector<int>vi;
typedef pair<int,int>ii;
class UFDS{
private:vi p,rank;
public:
   UFDS(int n){
     p.assign(n,0),rank.assign(n,0);
      for(int i=0;i<n;i++){
       p[i]=i;
       rank[i]=1;
      }

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

int main(){
      #ifndef ONLINE_JUDGE
          freopen("in.txt","r",stdin);
      #endif
         int t,n,s;
         scanf("%d",&t);
         while(t--){
            scanf("%d %d",&n,&s);
            vector<pair<int,ii > >edges;
            vector<pair<int,ii > >mst;
            for(int i=0,a,b,w;i<s;i++){
             scanf("%d %d %d",&a,&b,&w);
             edges.push_back(make_pair(w,make_pair(a,b)));
            }
            sort(edges.begin(),edges.end());
            int ans1=0,cnt=0;
            UFDS uf(n+1);
            for(int i=0;i<s;i++){
              pair<int,ii >a=edges[i];
              if(!uf.isSame(a.second.first,a.second.second)){
                uf.join(a.second.first,a.second.second);
                mst.push_back(make_pair(a.first,make_pair(a.second.first,a.second.second)));
                ans1+=a.first;
                cnt++;
              }
             if(cnt==n-1)break;            
            }

            printf("%d ",ans1);
           int ans3=99999999;
            for(int i=0;i<(int)mst.size();i++){
                int ans2=0;
                UFDS uf(n+1);
                cnt=0;
               pair<int,ii >b=mst[i];
               for(int j=0;j<s;j++){
                    pair<int,ii >a=edges[j];
                    if(a.second.first==b.second.first&&a.second.second==b.second.second)continue;
                    if(!uf.isSame(a.second.first,a.second.second)){
                    uf.join(a.second.first,a.second.second);
                    ans2+=a.first;
                    cnt++;
                   }

                 }
                 if(cnt==n-1)
               ans3=min(ans3,ans2);
            }
           printf("%d\n",ans3);
         }
}
