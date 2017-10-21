#include <bits/stdc++.h>
using namespace std;
const int N=(int)1e5+7;
pair<int,int>a[N];


int main(){
#ifndef ONLINE_JUDGE
        freopen("in","r",stdin);
#endif
     int n,q;
     scanf("%d %d",&n,&q);
     for(int i=0;i<n;i++){
        scanf("%d",&a[i].first);
        a[i].second=1;
     }
     string s;
     int x;
     int f=1;
     for(int i=0;i<q;i++){
        cin>>s>>x;
        if(s=="in"){
          int pos=lower_bound(a,a+n,make_pair(x,1))-a;
//          int l=0,r=n-1;
          /*
          while(l<r){
             int mid=(l+r)>>1;
             if(a[mid].first < x || a[mid].first==x && a[mid].second==0)l=mid+1;
             else r=mid;

          }
          cerr<<pos<<" "<<l<<endl;
          */
          if(pos==n){
           puts("-1");
          }else{
            printf("%d\n",pos+1);
            a[pos].second=0;
          }
       }else{
         a[x-1].second=1;
       }
     }
}