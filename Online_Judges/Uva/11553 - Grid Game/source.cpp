#include <stdio.h>
#include <string.h>
using namespace std;
const int N=64;
int row[N],col[N];
int r[8],c[8];
int n;
void editcol(int &a,int &b){

  int min=2e9,bestr;
  for(int i=0;i<n*n&&!c[i%n];i++){
     if(col[i]<min){
         min=col[i];
         bestr=i%n;
     }
  }
    r[bestr]=1;
  min<0?a+=(-1*min):b+=min;
}
void editrow(int &a,int &b){

  int max=-11000,bestr;
  for(int i=0;i<n*n&&!r[i/n];i++){
     if(row[i]>max){
        max=row[i];
         bestr=i/n;
     }
  }
    r[bestr]=1;
  max<0?b+=(-1*max):a+=max;
}
int main(){
     int t;
     freopen("in.txt","r",stdin);
//     freopen("out","w",stdout);
    scanf("%d",&t);
      while(t--){
	int a;
        scanf("%d",&n);
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        memset(r,0,sizeof(r));
        memset(c,0,sizeof(c));
       for(int i=0;i<n*n;i++){
          scanf("%d",&a);
         row[i]=a,col[i]=a;
       }
       int alice=0,bob=0;
           while(n--){
                editrow(alice,bob);
                editcol(alice,bob);
           }
         printf("%d\n",alice-bob);
 }







}
