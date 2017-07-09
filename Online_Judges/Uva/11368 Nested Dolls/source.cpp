#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
const int N=20002;
int arr[N],n,dp[N],ans;
typedef vector<pair<int,int> >vii;
vii tmp;
void LIS(){
     ans=0;
     for(int i=0;i<n;i++){
      int pos=lower_bound(dp,dp+ans,arr[i])-dp;
      dp[pos]=arr[i];
      if(pos+1>ans)ans=pos+1;
     }
}
int main(){
     int t;
     freopen("in.txt","r",stdin);
     scanf("%d",&t);
     while(t--){
       scanf("%d",&n);
       int a,b;
       tmp.clear(); 
       for(int i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            tmp.push_back(make_pair(a,b));
         }

       sort(tmp.rbegin(),tmp.rend());
       
       for(int i=0;i<n;i++){
           arr[i]=tmp[i].second;
       }
      LIS();
      printf("%d\n",ans);
      
  }












}