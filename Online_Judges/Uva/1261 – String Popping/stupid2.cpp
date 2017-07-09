#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
bool ans;
int i,j;
bool solve(string s){
   if(s.empty())return true;
   for( i=0;i<s.size()&&!ans;i++){
     for( j=i;j<s.size()&&s[i]==s[j];j++);
     if(j-i>=2){
          ans|=solve(s.substr(0,i)+s.substr(j));
        }
      i=j-1;
   }

 return ans;
}
int main(){
     freopen("in.txt","r",stdin);
     int t;
     string s;
     scanf("%d",&t);
     cin.ignore();
     for(int i=0;i<t;i++){
         ans=false;
         getline(cin,s);
         printf(solve(s)==true?"1\n":"0\n");
     }
}