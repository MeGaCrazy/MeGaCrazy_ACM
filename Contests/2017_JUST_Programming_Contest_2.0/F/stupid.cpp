/*
*   Idea: Just take the array and print the first lecture that is equal or greater than required , Hint: Use Binary_Search :)
*
*    Happy Solving :)
*/
#include <bits/stdc++.h>
using namespace std;
const int N=(int)1e5+7;
int arr[N];



int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
      int n;
      scanf("%d",&n);
      for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
      }
      sort(arr,arr+n);
      int q;
      scanf("%d",&q);
      while(q--){
         int a;
         scanf("%d",&a);
         int pos=lower_bound(arr,arr+n,a)-arr;
         if(pos==n){
          puts("Dr. Samer cannot take any offer :(.");
         }else{
          printf("%d\n",arr[pos]);
         }
      
      }
}