#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
typedef vector<int>vi;
int main(){
    char s[12]={0} ;
      freopen("in.txt","r",stdin);
	while(scanf("%s",&s)){
	int n,a; char t;
	sscanf(s,"%d %c",&n,&t);
	 if(n==0)break;
	 vi v;
	 for(int i=0;i<n;i++){
	    scanf("%d",&a);
	    v.push_back(a);
	              
	  }
	  next_permutation(v.begin(),v.end())?printf("yes\n"):printf("no\n");
	}

}