#include <stdio.h>
#include <string.h>
#include <set>
using namespace std;
int main(){
     int n,m;
     scanf("%d %d",&n,&m);
     char s[105];
     set<char>soso;
     bool ok=true;
     char v[105];
     for(int i=0;i<n;i++){
            scanf("%s",&s);
            /// uilitz 
            soso.clear();
            char a;
            for(int j=0;j<m;j++){
             a=s[j];
             soso.insert(s[j]);
            }
            if(soso.size()==1)v[i]=a;
            else ok=false;
     }
     if(ok==false){
      printf("NO\n");
     }
     else{
      for(int i=0;i<n-1;i++){
         if(v[i]==v[i+1]){
          ok=false;
           break;
        }  
     }
      if(ok==false){
      printf("NO\n");
     }
     else printf("YES\n");
    }
}