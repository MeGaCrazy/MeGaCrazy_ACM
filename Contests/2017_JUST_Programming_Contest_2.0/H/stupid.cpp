/*
*    Idea : if u move greedy and take n*n to and for each number get his next Bigger Will Get TLE 10^5 * (10^5) operation
*           So  the numbers of elements it's value between 1 and 50 then it's the way to solve the problem
*           for each number 1-50 but it's position in array : for example array like that 1 2 30 30 40
*                                                              Our list be like that 
*                                                              1={idexes:1}
*                                                              2={indexes:2}
*                                                              30:{indexes:3,4}
*                                                              40={indexes:5}
*
*         and we move for each number x we try every array from (x+1 to 50) to get first index bigger than him :)
*   Happy Solving :)
*/                                                              
#include <bits/stdc++.h>                                        
using namespace std;
const int N=(int)1e5+7;
int arr[N];
set<int>s[55];


int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        s[arr[i]].insert(i);
     }
     set<int>::iterator itr;
     for(int i=1;i<=n;i++){
       if(i!=1)printf(" ");
       int ans=(int)1e9;
        for(int j=arr[i]+1;j<=50;j++){
           itr=s[j].lower_bound(i);
           if(itr==s[j].end())continue;
           if(*itr > i && *itr < ans){
               ans=*itr;
           }
        }
        if(ans==(int)1e9){
          printf("-1");
        }else{
          printf("%d",arr[ans]);
        }               
    
    }


}