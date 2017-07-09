#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;
typedef vector<int>vi;
typedef pair<int,int>ii;
vector< pair<int,int > >mst [205];
int ans;
bool visit[205];
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
        return p[i]==i?i:p[i]=findSet(p[i]);
     }
     bool isSame(int i,int j){
       return findSet(i)==findSet(j);
     }
    void join(int i,int j){
        int x=findSet(i);
        int y=findSet(j);
        if(rank[x]>=rank[y])p[y]=p[x];
        else p[x]=y;
        if(rank[x]==rank[y])rank[x]++;
    }
};
bool solve(int c1,int c2){
    if(c1==c2)return true;
    visit[c1]=1;
    bool  found=false;
    for(int i=0;i<(int)mst[c1].size()&&!found;i++){
      if(!visit[mst[c1][i].first]){
         found=solve(mst[c1][i].first,c2);
         if(found)ans=max(ans,mst[c1][i].second);
       }
    
    }
    return found;
}
int main(){
   #ifndef ONLINEJUDGE
        freopen("in.txt","r",stdin);
   #endif
        int n,s,cas=1;
        while(scanf("%d %d",&n,&s)){
          if(!n&&!s)break;
          int v=1;
          map<string,int>mp;
          vector<pair<int,pair<int,int > > >edges;
          UFDS 	uf(n+1);
          memset(mst,0,sizeof(mst));

          char s1[50]={},s2[50]={};
          string str1,str2;
          int w;
          for(int i=0;i<s;i++){
            cin>>str1>>str2>>w;
            if(mp[str1]==0){
               mp[str1]=v++;
            }
            if(mp[str2]==0){
               mp[str2]=v++;
            }
           edges.push_back(make_pair(w,make_pair(mp[str1], mp[str2])));
        }
        int c1,c2;
        // queries
	cin>>s1>>s2;
        c1=mp[s1];
        c2=mp[s2];
        sort(edges.begin(),edges.end());
        int cnt=0;
        for(int i=0;i<s;i++){
          pair<int,pair<int,int > >a=edges[i];
          int x=a.second.first;
          int y=a.second.second;
          if(!uf.isSame(x,y)){                                                        
             uf.join(x,y);
             cnt++;
             mst[x].push_back(make_pair(y,a.first));
             mst[y].push_back(make_pair(x,a.first));
           }
           if(cnt==n-1)break;
        }
        int ans=0;
        memset(visit,0,sizeof(visit));
       solve(c1,c2);
       printf(cas==1?"Scenario #%d\n":"\nScenario #%d\n",cas++);
       printf("%d tons\n",ans);
    }
}