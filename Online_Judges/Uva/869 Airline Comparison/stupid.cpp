#include <bits/stdc++.h>
using namespace std;
bool adj1[26][26],adj2[26][26];
int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif
     int t;
     scanf("%d",&t);
     while(t--){
          int n;
          //clr
          for(int i=0;i<26;i++){
             for(int j=0;j<26;j++){
               adj1[i][j]=adj2[i][j]=0;
             }
          }
          scanf("%d",&n);
          char a,b;
          for(int i=0;i<n;i++){
            scanf(" %c %c",&a,&b);
            adj1[a-'A'][b-'A']=1;
          }
          scanf("%d",&n);
          for(int i=0;i<n;i++){
            scanf(" %c %c",&a,&b);
            adj2[a-'A'][b-'A']=1;
          }
          for(int k=0;k<26;k++){
             for(int i=0;i<26;i++){
                for(int j=0;j<26;j++){
                   adj1[i][j]|=adj1[i][k]&adj1[k][j];
                   adj2[i][j]|=adj2[i][k]&adj2[k][j];
                }             
             }
          }
          bool ok=true;
          for(int i=0;i<26&&ok;i++){
              for(int j=0;j<26&&ok;j++){
                  if((adj1[i][j]&&adj2[i][j])||(!adj1[i][j]&&!adj2[i][j]))continue;
                  else {ok=false;break;}
              }
          }
          ok==true?printf("YES\n"):printf("NO\n") ;     
          if(t)printf("\n");
     }
}