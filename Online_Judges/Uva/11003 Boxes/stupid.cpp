#include <stdio.h>
#include <string.h>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
typedef vector<pair<int,int> >vii;
const int N=1005;
int dp[N],arr[N],n;
int LIS(){
    int len=0;
    for(int i=0;i<n;i++){
      int pos=lower_bound(dp,dp+len,arr[i])-dp;
      dp[pos]=arr[i];
      if(pos+1>len){
          len=pos+1;
        }  

   }
   return len-1;
}
int main(){  
   freopen("in.txt","r",stdin);
   while(scanf("%d",&n),n){
      vii v; int a,b;
      for(int i=0;i<n;i++){
          scanf("%d %d",&a,&b);
          v.push_back(make_pair(a,b));
      }
      sort(v.begin(),v.end());
      for(int i=0;i<n;i++){
         arr[i]=v[i].second;
       }
      printf("%d\n",LIS());
   }
}