#include <stdio.h>
#include <string.h>
int r,c;
using namespace std;
#define Max(a,b)    ((a)>=(b))?(a):(b)
int chr[]={-1,0 ,1,0};
int chc[]={0, 1 ,0,-1};
char arr[25][25];
void dfs(int i,int j,int & ans,char str){
    if(i>=r||j>=c||j<0||i<0||arr[i][j]!=str)return;
    arr[i][j]='.';
    ans++;
    for(int s=0;s<4;s++){
        int xx = i + chr[s], yy = j + chc[s];
        if (yy >= c) yy = 0;
        else if (yy < 0) yy = c - 1;

       dfs(xx,yy,ans,str);
    }
}
int main(){
      #ifndef ONLINE_JUDGE
         freopen("in.txt","r",stdin);
      #endif
      while(scanf("%d %d",&r,&c)!=EOF){
          for(int i=0;i<r;i++){
             scanf("%s",&arr[i]);
          }
        int corx,cory;
        scanf("%d %d",&corx,&cory);
        char str=arr[corx][cory];
        int res=0,ans=0;
        dfs(corx,cory,ans,str);
        //res=ans;
        for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
             if(arr[i][j]==str){
               ans=0;
               dfs(i,j,ans,str);
               res=Max(ans,res);
             }
           
           }
        
        }
        printf("%d\n",res);
      
      }
}