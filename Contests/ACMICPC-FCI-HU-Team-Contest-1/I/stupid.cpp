/*
*  Idea : all he said each mutliple of prime number he will give us then will colored with red other not
*         He want to know the value for k non red square just move and if is not multiple of any of the list then it non colord
*         if we reach k number print this number 
*
*         Happy Solving :)
*/

#include <bits/stdc++.h>
using namespace std;
const int N=15;
int arr[N];
int main(){
//#ifndef ONLINE_JUDGE
        freopen("number.in","r",stdin);
//#endif
   int t;
   scanf("%d",&t);
   while(t--){
      int n,k;
      scanf("%d %d",&n,&k);
      for(int i=0;i<n;i++){
         scanf("%d",arr+i);
      }
      int cnt=0;
      for(int i=1;i<=(int)2e9;i++){
        
          bool ok=1;
          for(int j=0;j<n;j++){
             if(i%arr[j]==0){ok=0;break;}
          }
        //  cerr<<i<<" "<<ok<<endl;
          if(ok)cnt++;
          if(cnt==k){printf("%d\n",i);break;}
      }
   }
}