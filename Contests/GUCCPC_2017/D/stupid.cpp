/**
* Idea : He said Summation of n is 7200 in The Biggest Test Case so if we have n=5000 in every test case how many test case i will get
*        7200/5000= 14  Then if i make in Every test n^2 will get = 14*500*500 = 350 million and it's Passed :) 
*        Now Move For another then how we count in every range the number of odds it's easy to see how i make it in Code  
*
*      Happy Solving :)
**/

#include <bits/stdc++.h>
using namespace std;
const int N=5005;
int a[N];
int cnt[(int)1e6+7];
int main(){
//#ifdef ONLINE_JUDGE
        freopen("cases.in","r",stdin);
//#endif
     int t;
     scanf("%d",&t);
     while(t--){
       int n;
       scanf("%d",&n);
       for(int i=0;i<n;i++){
           scanf("%d",&a[i]);
       }
       int ans=0;
       memset(cnt,0,sizeof(cnt));
       int id=0;
       for(int i=0;i<n;i++){
           id++;
           int Odd=0;
          for(int j=i;j<n;j++){
              cnt[a[j]]=(cnt[a[j]]==id)?0:id;
              if(cnt[a[j]]==id){
                 Odd++;
              }else 
                Odd--;
             if(Odd==1)ans++;
          }
       }
       printf("%d\n",ans);
     }

}