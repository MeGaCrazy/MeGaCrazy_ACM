#include <bits/stdc++.h>
using namespace std;
const int N=26;
int arr[N];



int main(){
//#ifndef ONLINE_JUDGE
        freopen("good.in","r",stdin);
//#endif
       int t;
       scanf("%d",&t);
       while(t--){
          memset(arr,0,sizeof(arr));
           string s;
           cin>>s;
           if(s.size() > 26){
             puts("no");
             continue;
           }
           bool ok=1;
           for(int i=0;i<(int)s.size();i++){
              if(arr[s[i]-'a']){ok=0;break;}
               arr[s[i]-'a']++;
           }
           if(ok){
             puts("yes");
           }else{
             puts("no");
           }
       }



}