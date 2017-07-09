#include <bits/stdc++.h>
using namespace std;
int main(){
//   freopen("in","r",stdin);
  int n,t;
  scanf("%d",&t);
  while(t--){
      scanf("%d",&n);
      string s;
      int arr[10]={};
      for(int i=1;i<=n;i++){
        int a=i;
        while(a){
         s+=a%10;
         a/=10;
        }
      }
      for(int i=0;i<(int)s.length();i++){
           arr[(int)s[i]]++;
      }
      for(int i=0;i<=9;i++){
        printf(i==0?"%d":" %d",arr[i]);
      }printf("\n");
  }
}