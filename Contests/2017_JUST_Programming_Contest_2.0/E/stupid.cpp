/*
*     Idea : Simulate the function that given 
*     Corner Case :  if number of repeition is prime or multiple of prime the answer must be one of it's multiple 
*                    so u shouldn't move from 1-5 only no u must itrate for all numbers between  2 and 10^5
*
*       Happy Solving :)
*/
#include <bits/stdc++.h>
using namespace std;
const int N=26;
int arr[N];



int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
      string s;
      cin>>s;
      for(int i=0;i<(int)s.size();i++){
          arr[s[i]-'a']++;
      }
    int ans=0;
    long long Min=2e18;
    for(int i=2;i<=100005;i++){
       long long sum=0;
       for(int j=0;j<N;j++){
          if(arr[j]==0)continue;
          sum+=((long long)(arr[j]%i)*arr[j]);
       }
       if(sum < Min){
        Min=sum;
        ans=i;
       }
     
    } 
    printf("%d\n",ans);  
      
}
