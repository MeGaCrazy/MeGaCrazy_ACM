/*
*  Idea :  Just reverse the ranges and print the array
*
*/
#include <bits/stdc++.h>
using namespace std;
const int N=105;
int arr[N];



int main(){
//#ifndef ONLINE_JUDGE
        freopen("wall.in","r",stdin);
//#endif
       int n,q;
       scanf("%d %d",&n,&q);
       for(int i=1;i<=n;i++){
           scanf("%d",arr+i);
       }
       int a,b;
       while(q--){
          scanf("%d %d",&a,&b);
          int l=a,r=b;
          while(a<=b){
               swap(arr[a],arr[b]);
               a++,b--;
          }
           
      }
      for(int i=1;i<=n;i++){
        printf(i==1?"%d":" %d",arr[i]);
      }

}