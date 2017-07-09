#include <stdio.h>
#include <algorithm>
using namespace std;
const int N=20000;
int dragons[N],knights[N];
int main(){
  freopen("in.txt","r",stdin);
  int n,m;
  while(scanf("%d %d",&n,&m),n||m){
    for(int i=0;i<n;i++)
       scanf("%d",&dragons[i]);
    for(int i=0;i<m;i++)
       scanf("%d",&knights[i]);
    
    sort(dragons,dragons+n);
    sort(knights,knights+m);
    int k=0,d=0,ans=0;
    while(d<n&&k<m){
      while(dragons[d]>knights[k]&&k<m)k++;
      if(k==m)break;
      ans+=knights[k];
      d++,k++;
    }  
    d==n?printf("%d\n",ans):printf("Loowater is doomed!\n");
 }
}