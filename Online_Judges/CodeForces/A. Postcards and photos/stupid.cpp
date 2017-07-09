#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <iostream>
using namespace std;
char s[35];
int solve(int l,int r){
   if(r-l+1>7)return -1;
   if(r!=l&&s[l]=='0')return -1;
   int ans=0;
   for(int i=l;i<=r;i++){
    ans=(ans*10)+(s[i]-'0');
   }
   if(ans>1000000)return -1;
   else return ans;
}
int main(){
   
    scanf("%s",&s);
    int sz=strlen(s);
    int ans=-1;
    for(int i=0;i<sz;i++){
          for(int j=i+1;j<sz-1;j++){
              int a=solve(0,i);
              int b=solve(i+1,j);
              int c=solve(j+1,sz-1);
              if(a!=-1&&b!=-1&&c!=-1){
                int cal=a+b+c;
                if(cal>ans)ans=cal;
              }
          }
    }
    printf("%d\n",ans);

}