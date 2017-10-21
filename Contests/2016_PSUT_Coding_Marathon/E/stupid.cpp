#include <bits/stdc++.h>
using namespace std;




int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
      string s1,s2;
      cin>>s1>>s2;
      if(s1==s2){
         puts("yes");
      }else if((int)s1.size()==(int)s2.size()&& s1.size()>=8){
          int dif=0;
          for(int i=0;i<(int)s1.size();i++){
             if(s1[i]!=s2[i])dif++;
          }
          if(dif>1)puts("no");
          else puts("yes");
      }else if(((int)s1.size()-(int)s2.size())==1&&(int)s1.size()>=8){
          bool flag=0;
         for(int i=0;i<(int)s1.size();i++){
             int idx1=0,idx2=0;
             int dif=0;
             while(1){
                 if(idx1==(int)s1.size())break;
                 if(i==idx1){idx1++;continue;}
                 else if(s1[idx1]!=s2[idx2])dif++;
                 idx1++,idx2++;
                 if(dif>1)break;
             }
             if(dif==0){flag=1;break;}
         }
         if(flag)puts("yes");
         else puts("no");
      }else {
        puts("no");
      }
}