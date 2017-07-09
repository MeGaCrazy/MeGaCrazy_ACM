#include <iostream>
#include <stdio.h>
#include <vector>
#include <utility>
#include <string.h>
using namespace std;
typedef pair<int,int>pii;
typedef vector<pii>vii;
typedef vector<string>vs;
int check(int sal,const vii&A){
	int sz=A.size();
	int cnt=0,j=-1;
   for(int i=0 ;i<sz;i++){
   if(A[i].first<=sal&&A[i].second>=sal)
   		cnt++,j=i;
   	if(cnt>1)
   	return -1;
   }
   return j;
}
int main(){
    int t;
    freopen("in.txt","r",stdin);
    scanf("%d",&t);
    while(t--){
    int d,a,b;char str[21]={0};
    scanf("%d",&d);
    vs s;vii v;pii p;
       for(int i=0;i<d;i++){
             scanf("%s %d %d",&str,&a,&b);
            s.push_back(str);
            p.first=a;
            p.second=b;
            v.push_back(p);
       }
       int q;
       scanf("%d",&q);
       for(int i=0;i<q;i++){
          scanf("%d",&a);
           check(a,v)==-1?printf("UNDETERMINED\n"):printf("%s\n",s[check(a,v)].c_str());     
       }
       if(t)printf("\n");              
    }	

}