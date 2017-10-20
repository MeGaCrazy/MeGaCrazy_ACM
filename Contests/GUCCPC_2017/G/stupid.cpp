/**
*  Idea : We Use the two pointers technquie But Still  The Problem How we remove the the element in left pointer 
*         The Sol is  : when Take Every Element to Be in Range we add his binary represntion in range let we add 5 so
*                       his Binary_reperesntion is : 1 0 1 => arr[0]++ ,arr[2]++ :) so if i want to remove the element from range
*                       remove 5 so arr[0]--,arr[2]--; so if there is another 5 in range still arr[0]>0 && arr[2] >0 :) and the value 
*                       doesn't change :) 
*        Happy Solving :)          
**/
#include <bits/stdc++.h>
using namespace std;
const int N=(1e5)+7;
int a[N],ans;
int cnt[25];
int n,v;
int Num(){
   int ret=0;
   for(int i=0;i<=23;i++){
       if(cnt[i])ret|=(1<<i);
   }
   return ret;
}
void Set(int a){
    for(int i=0;i<=23;i++){
       if((a&(1<<i))!=0)cnt[i]++;
    }
}
void Unset(int a){
    for(int i=0;i<=23;i++){
      if((a&(1<<i))!=0)cnt[i]--;
    }
}

int main(){
//#ifndef ONLINE_JUDGE
        freopen("wifi.in","r",stdin);
//#endif
       int t;
       scanf("%d",&t);
       while(t--){
           ans=0;
           memset(cnt,0,sizeof(cnt));
           scanf("%d %d",&n,&v);
           for(int i=0;i<n;i++){
              scanf("%d",&a[i]);  
           }
           int ans=0,l=0,r=0;
           while(1){
              if(Num()<=v){
                 ans=max(ans,r-l);
              }
              if(r==n){
                break;
              }
              if(Num() >v){
                 Unset(a[l]);
                 l++;
              }else{
                Set(a[r]);
                r++;
              }
           }

           printf("%d\n",ans);
         }

}     