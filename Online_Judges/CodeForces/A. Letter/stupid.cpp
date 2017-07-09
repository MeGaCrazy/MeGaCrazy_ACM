#include <stdio.h>
#include <string.h>
using namespace std;
int main(){

     int n,m;
     char s[55][55];
     scanf("%d%d",&n,&m);
    int imin=999999,imax=-1;
    int rmin=99999,rmax=-1;
     for(int i=0;i<n;i++){
        scanf("%s",&s[i]);
        for(int j=0;j<m;j++){
          if(s[i][j]=='*'){
            if(i<rmin){
             rmin=i;
            }
            if(i>rmax){
             rmax=i;
            }                                                                `
            if(j>imax)
             imax=j;
            if(j<imin)
             imin=j;
         }
 
        }     
     }
     for(int i=rmin;i<=rmax;i++){
        for(int j=imin;j<=imax;j++){
         printf("%c",s[i][j]);
        }
      printf("\n");
     }
}