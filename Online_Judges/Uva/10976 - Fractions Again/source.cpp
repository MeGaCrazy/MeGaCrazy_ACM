#include <stdio.h>
#include <vector>
#include <utility>
using namespace std;
typedef pair<int,int>ii;
typedef vector<ii>vii;
int main(){
   	int n;
   	freopen("in.txt","r",stdin);
	 while(scanf("%d",&n)!=EOF){
      vii v;ii p;
      for(int y=n+1;y<=2*n;y++){
      
      if((n*y)%(y-n)==0)
       v.push_back(make_pair((n*y)/(y-n),y));
      }

      	int sz=v.size();
         printf("%d\n",sz);

        for(int i=0;i<sz;i++){
        printf("1/%d = 1/%d + 1/%d\n",n,v[i].first,v[i].second);               
     }
 
 
  	}



}