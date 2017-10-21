#include <bits/stdc++.h>
using namespace std;
int arr[5];
int money[]={1,5,10,20,50};
void Add(int f1,int f2,int f3,int f4,int f5){
    arr[0]+=f1;
    arr[1]+=f2;
    arr[2]+=f3;
    arr[3]+=f4;
    arr[4]+=f5;
}
bool Can(int x){
   
   for(int i=4;i>=0;){
       if(x >=money[i]&&arr[i] ){
          x-=money[i];
          arr[i]--;
       }else{
         i--;
       }
   }
   return x==0;
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
     int n;
     scanf("%d",&n);
     int f=1;
     int f1,f2,f3,f4,f5,k;
     for(int i=0;i<n;i++){
       scanf("%d %d %d %d %d %d",&k,&f1,&f2,&f3,&f4,&f5);
       int value=(f1)+(f2*5)+(f3*10)+(f4*20)+(f5*50);
       Add(f1,f2,f3,f4,f5);
       if(Can(value-k)){
        
       }else{
         f=0;
       }
     }
     if(!f){
      puts("no");
     }else{
       puts("yes");
     }

          
}