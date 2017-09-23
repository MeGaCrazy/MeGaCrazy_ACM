/*
*    idea : T(i,j)=ai,aj
*           he want a0,a1,a2;
*           so From illustraton T(0,0)=a0*a0 , T(1,1)=a1*a1
*           So easly for ( i to n ) ai =sqrt(Tii);
*/
#include <bits/stdc++.h>
using namespace std;
const int N=105;
int arr[N];


int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
       int n;
       scanf("%d",&n);
       for(int i=1;i<=n;i++){
          for(int j=1,a;j<=n;j++){
              scanf("%d",&a);
             if(i==j)arr[i]=(int)sqrt(a);
          }
       }
       for(int i=1;i<=n;i++){
           printf(i==1?"%d":" %d",arr[i]);
       }

}