#include <stdio.h>              
#include <string>
#include <string.h>
#include <time.h>
using namespace std;
int arr[105],target,n;
bool dp[105][32000*2+5],flag;
inline bool check(int i ,int value){
 if(value<=32000&&value>=-32000&&!dp[i][value+32000]){
       dp[i][value+32000]=true;
       return true;
   }else
    return  false;
}
bool solve(int i,int value,string s){
      if(flag)return 1;
      if(i==n-1){
          if(value==target){
                flag=1; 
               for(int i=0;i<n-1;i++){
                  printf("%d%c",arr[i],s[i]); 
               }
               printf("%d=%d\n",arr[n-1],target);
          }
       return true;
    }
     // first choice sum
    if(check(i+1,value+arr[i+1])){
          solve(i+1,value+arr[i+1],s+'+');
     }
    // second choice subtract
    if(check(i+1,value-arr[i+1])){
        solve(i+1,value-arr[i+1],s+'-');
    }
   // third choice multiply
   if(check(i+1,value*arr[i+1])){
        solve(i+1,value*arr[i+1],s+'*');
    }
   //  fourth choice divible
   if(!(value%arr[i+1])&&check(i+1,value/arr[i+1])){
        solve(i+1,value/arr[i+1],s+'/');
   } 
    return flag;
}
int main(){
       freopen("in.txt","r",stdin);
       int t;
       scanf("%d",&t);
       while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        } 
        scanf("%d",&target);
        memset(dp,0,sizeof(dp));
        flag=0;
        bool ans=solve(0,arr[0],"");
        if(!ans)printf("NO EXPRESSION\n");
      }
        fprintf(stderr,"The run time take %d ms\n",(int)clock());    
}