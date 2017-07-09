#include <stdio.h>
using namespace std;
int main(){
      int t,n,p;
       freopen("in	","r",stdin);
      scanf("%d",&t);
      while(t--){
      scanf("%d %d",&n,&p);
      int arr[20]={0};
      for(int i=0;i<p;i++)
          scanf("%d",&arr[i]);

      int sol=false;
       if(n==0){printf("YES\n");}
   else {       
      for(int i=0;i<(1<<p)&&!sol;i++){
        int sum=0;
      	for(int j=0;j<p&&!sol;j++){
            if(i&(1<<j))sum+=arr[j];
            if(sum==n)sol=true;
	}
      }
      sol==true?printf("YES\n"):printf("NO\n");
     }
  }                                         
}

