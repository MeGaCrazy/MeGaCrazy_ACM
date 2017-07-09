#include <stdio.h>
#include <string.h>
using namespace std;
char arr[105][105];
int n;
int dy[]= {1,-1,0,0,1,1,-1,-1};
int dx[]= {0,0,1,-1,1,-1,-1,1};
void dfs(int r,int c){
    if(r>=n||c>=n||r<0||c<0||arr[r][c]=='.')return ;
    arr[r][c]='.';
    for(int i=0;i<8;i++){
     dfs(r+dx[i],c+dy[i]);
    }     


}
int main(){
     #ifndef ONLINE_JUDGE
          freopen("in.txt","r",stdin);
     #endif 
    
     int t,cas=1;
     scanf("%d",&t);
     while(t--){
       scanf("%d",&n);
       for(int i=0;i<n;i++){
          scanf("%s",&arr[i]);
       }
       int ans=0;
       for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            if(arr[i][j]=='x'){
               ans++;
               dfs(i,j);
            }
          
          }
       
       }
       printf("Case %d: %d\n",cas++,ans);
     
     }
}