#include <stdio.h>
#include <algorithm>
const int N=100;
using namespace std;
bool cmp(int a,int b){
 return a>b;
}
int mor[N],eve[N];
int main(){
   int n,d,r;
   freopen("in","r",stdin);
   while(scanf("%d %d %d",&n,&d,&r)!=EOF){
       if(!n&&!d&&!r)break;
       for(int i=0;i<n;i++)
             scanf("%d",&mor[i]);
       for(int i=0;i<n;i++)
            scanf("%d",&eve[i]);
        sort(mor,mor+n);
        sort(eve,eve+n,cmp);
                 //reverse(eve,eve+n);
        int ans=0;
       for(int i=0;i<n;i++){
         if(mor[i]+eve[i]<=d)continue;
         else{
           ans+=((mor[i]+eve[i])-d);
          }
         }
       printf("%d\n",ans*r);
    }
}