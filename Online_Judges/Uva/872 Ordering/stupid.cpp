#include <stdio.h>
#include <string.h>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
vvi adj;
vi ans;
bool flag;
bool arr[27],visit[27];
int degree[27],n;
inline void mark(int v){
   visit[v]=1;
   for(int i=0;i<(int)adj[v].size();i++){
       degree[adj[v][i]]--;
   }

}
inline void unmark(int v){
     visit[v]=0;
     for(int i=0;i<(int)adj[v].size();i++){
       degree[adj[v][i]]++;
   }

}
void solve(){
    if(ans.size()==n){
     flag=1;
     for(int i=0;i<ans.size();i++){
       printf(i==0?"%c":" %c",(char)(ans[i]+'A'));
      }printf("\n");
      return;
    }
    for(int i=0;i<26;i++){
       if(arr[i]==1&&visit[i]==0&&degree[i]==0){
          ans.push_back(i);
          mark(i);
          solve();
          ans.pop_back();
          unmark(i);
       }
   }
}
int main(){
   #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
   #endif
   // solved but istring problem fucking bullshit
   int t;
   string s;
   scanf("%d",&t);
   while(t--){
       getchar();
       ans.clear();
       adj.assign(27,vi());
       cin.ignore();
       getline(cin,s);
       memset(degree,0,sizeof(degree));
       memset(visit,0,sizeof(visit));
       istringstream in(s);
       char g;
       while(in>>g){
          arr[(g-'A')]=1;
          n++;
         // ans.push_back((g-'A'));
       }
       string r;
       getline(cin,r);
       istringstream iss(r) ;
       while(iss>>s){
         adj[(s[0]-'A')].push_back((s[2]-'A'));
         degree[(s[2]-'A')]++;
       }
       flag=0;
       solve();
       if(flag==0){printf("NO");}
       if(t)printf("\n");
   }
}