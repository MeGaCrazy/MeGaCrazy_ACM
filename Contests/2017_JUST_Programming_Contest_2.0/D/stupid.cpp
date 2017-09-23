/*
*  Idea : Just simulate the process 
*
*
*/
#include <bits/stdc++.h>
using namespace std;




int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
      int t;
      scanf("%d",&t);
      int lec,digit,symbol;
      while(t--){
         string s;
         cin>>s;
         lec=digit=symbol=0;
         for(int i=0;i<(int)s.size();i++){
             if(s[i]>='0'&&s[i]<='9')digit++;
             else if(s[i]=='@'||s[i]=='?'||s[i]=='!')symbol++;
             else lec++;
         }
         if(lec<4 && digit >=4 && symbol >=2){
            puts("The last character must be a letter.");
         }
         else if(digit<4 && lec >=4 && symbol >=2){
           puts("The last character must be a digit.");
         }
         else  if(symbol<2 && digit >=4 && lec >=4){
           puts("The last character must be a symbol.");
         }
         else{
           puts("The last character can be any type.");
         }
      }

}