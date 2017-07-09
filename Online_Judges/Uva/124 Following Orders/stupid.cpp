#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vvi;
bool adj[30][30];
vi ans;
int n;
bool values[27],visit[27];
void solve(){
    if(ans.size()==n){
     for(int i=0;i<(int)ans.size();i++){
        printf("%c",(char)(ans[i]+'a'));
      }printf("\n");
    return;
   }
   for(int i=0;i<26;i++){
    if(values[i]==1&&!visit[i]){
      for(int j=0;j<26;j++){
       if(adj[i][j]==0&&!visit[j]){
          ans.push_back(i);
          visit[i]=1;
          solve();
          ans.pop_back();
          visit[i]=0;
         
       }
     }
   }
 }
}
int main(){
   #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
   #endif

   char arr[45]={},arr2[105]={};
   while(gets(arr)){
      n=0;
      memset(adj,0,sizeof(adj));
      memset(values,0,sizeof(values)); 
      memset(visit,0,sizeof(visit));
      int sz=strlen(arr);
      for(int i=0;i<sz;i+=2){
           values[(arr[i]-'a')]=1;
           n++;
      }
      gets(arr2);
      sz=strlen(arr2);
      for(int i=0;i<sz-2;i+=2){
          adj[(arr2[i]-'a')][((arr2[i+2]-'a'))]=1;
      }
     solve();
    printf("\n");
  }
}