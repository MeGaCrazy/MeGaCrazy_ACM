#include <bits/stdc++.h>
using namespace std;




int main(){
//#ifndef ONLINE_JUDGE
        freopen("overcode.in","r",stdin);
//#endif
       int t;
       scanf("%d",&t);
       while(t--){
           int n;
           scanf("%d",&n);
           vector<int>v;
           for(int i=0,a;i<n;i++){
               scanf("%d",&a);
               v.push_back(a);
           }
           if(n <6){
             puts("0");
           }
           else{
             sort(v.begin(),v.end());
             int cnt=0;
             int ans=0;
             for(int i=0;i+5<(int)v.size();){
                int dif=v[i+5]-v[i];
                if(dif >1000){
                   i++;
                }else{
                  ans++;
                  i+=6;
                }
             }
             printf("%d\n",ans);
                              
           }
       
       }

}