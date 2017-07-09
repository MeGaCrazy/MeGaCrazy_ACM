#include <stdio.h>
using namespace std;



int main(){
    int num[11]={1,1};
    for(int i=2;i<=10;i++){
        for(int j=0;j<i;j++){
           num[i]+=num[j]*num[i-j-1];
        }
    }
     int n;
     bool first=false;
     while(scanf("%d",&n)==1){
        if(first)puts("");
        first=true;
        printf("%d\n",num[n]);
     
     }

}