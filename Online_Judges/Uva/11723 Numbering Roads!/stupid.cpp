#include <bits/stdc++.h>
using namespace std;


int main(){
//  freopen("in","r",stdin);
 int n,r,cas=1;
 while(scanf("%d %d",&r,&n),(n||r)){
      printf("Case %d: ",cas++);
      if(n>=r){printf("0\n");}
      else{
          int cnt=0;
          int sum=02;
          for(int i=1;i<=26;i++){
            sum=i*n+n;
            if(sum>=r){printf("%d\n",i);break;}
          }
          if(sum<r){
             printf("impossible\n");
          }
               
       }
 
 }

}