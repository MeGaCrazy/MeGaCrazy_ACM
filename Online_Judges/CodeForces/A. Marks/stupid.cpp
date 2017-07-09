#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
     int n,m;
     scanf("%d%d",&n,&m);
     char s[105][105];
     for(int i=0;i<n;i++){
      scanf("%s",&s[i]);
     }
     int best[105]={0};
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if((s[j][i]-'0')>best[i]){
            best[i]=(s[j][i]-'0');
           }
        }     
     }
     int cnt=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(s[i][j]-'0'>=best[j]){
           cnt++;
           break;
          }
        
        }
     
     }

   printf("%d\n",cnt);




}