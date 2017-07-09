#include <stdio.h>
#include <vector>
using namespace std;
char arr[205][205];
int chr[]={-1,-1,0,0,1,1};
int chc[]={-1,0,-1,1,0,1};
int n;
bool ans;
bool floodfill(int r,int c,char c1,char c2){
   if(r==0&&c1=='b'){
    return 1;
   }
   if(c==0&&c1=='w')return 1;
   if(r<0||c<0||r>=n||c>=n)return 0;
   if(arr[r][c]!=c1)return 0;
   arr[r][c]=c2;
   for(int i=0;i<6;i++){
   ans|=floodfill(r+chr[i],c+chc[i],c1,c2);
   }
  return ans;
}
int main(){
    freopen("in.txt","r",stdin);
    int cas=1;
    while(scanf("%d",&n),n){
      for(int i=0;i<n;i++){
         scanf("%s",&arr[i]);
      }
      printf("%d",cas++);
     for(int i=n-1;i>=0;i--){
       ans=false;
       if(floodfill(i,n-1,'w','.')==true){
        printf(" W\n");
        break;
       }else if(floodfill(n-1,i,'b','.')==true){
         printf(" B\n");
       
       }
     
     } 

    
    
    
    }
    
   
    


}