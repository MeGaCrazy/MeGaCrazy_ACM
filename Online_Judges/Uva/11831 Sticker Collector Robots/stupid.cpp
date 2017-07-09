#include <stdio.h>
#include <string.h>
using namespace std;
   // n e s w
int x[]={0,1,0,-1};
int y[]={1,0,-1,0};
char str[105][105];
bool flag[105][105];
int n,m;
void checkcord(int &r,int &c,char &dir){
     bool ok=true;
     for(int i=0;i<n&&ok;i++){
        for(int j=0;j<m;j++){
           if(str[i][j]=='N'||str[i][j]=='S'||str[i][j]=='L'||str[i][j]=='0'){
            dir=str[i][j];
            r=i,c=j;
            ok=false;
            break;
           }        
        }
     }
}
int main(){
   freopen("in.txt","r",stdin);
   int n,m,s;
   while(scanf("%d%d%d",&n,&m,&s),n&&m&&s){
         memset(flag,0,sizeof(flag));
         for(int i=0;i<n;i++){
         scanf("%s",&str[i]);
     }
      int r,c;char dir;
      checkcord(r,c,dir);
      int direct;
      if(dir=='N'){
       direct=0;
      }else if(dir=='L'){
       direct=1;
      }else if(dir=='S'){
       direct=2;
      }else {
       direct=3;
      }
     char instr[55557];
     scanf("%s",&instr);
     int sz=strlen(instr);
     int ans=0;
     for(int i=0;i<sz;i++){
       if(instr[i]=='D'){
         direct=(direct+1)%4;
       }else if(instr[i]=='E'){
         direct=(((direct-1)%4)+4)%4;
       }else{
        if(r+x[direct]>=n||c+y[direct]>=m||r+x[direct]<0||c+y[direct]<0||str[r+x[direct]][c+y[direct]]=='#'){
          continue;
        }else{
          if(str[r+x[direct]][c+y[direct]]=='*'){
                 ans++;
                 flag[r+x[direct]][c+y[direct]]=1;
            }
            r+=x[direct];
            c+=y[direct];
        }       
     }
     
     
  }  
       	
  printf("%d\n",ans);
  
   
 }




}