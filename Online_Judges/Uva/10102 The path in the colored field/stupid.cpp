#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <math.h>
using namespace std;
typedef pair<int,int>ii;
typedef vector<ii>vii;
int main(){
      int m;char s[100][100]={0};
   freopen("in.txt","r",stdin);
    while(scanf("%d",&m)!=EOF){
 	for(int i=0;i<m;i++)scanf("%s",s[i]);
            vii v1,v3;
             for(int i=0;i<m;i++){
               for(int j=0;j<m;j++){
         	if(s[i][j]=='1')v1.push_back(make_pair(i,j));
         	 else if(s[i][j]=='3')v3.push_back(make_pair(i,j));
         	}
            }
               int dis=2e9,minn=-1;	
	    int sz1=v1.size(),sz2=v3.size();
                for(int i=0;i<sz1;i++){
                   dis=2e9;
                  for(int j=0;j<sz2;j++){
         	      dis=min(dis,abs(v1[i].first-v3[j].first)+abs(v1[i].second-v3[j].second));
         	}
                 minn=max(dis,minn);
            }	
	printf("%d\n",minn);
	}
 }
