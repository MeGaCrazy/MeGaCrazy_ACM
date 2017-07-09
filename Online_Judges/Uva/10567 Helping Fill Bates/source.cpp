#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
vector<vector<int>>vvi;
int q;
const int N=1234567;
char arr[N], query[102];
int main(){
  freopen("in.txt","r",stdin);
  vvi.resize(124);
  scanf("%s",&arr);
  int length=strlen(arr);
  for(int i=0;i<length;i++)
    vvi[arr[i]].push_back(i);
     scanf("%d",&q);
     for(int i=0;i<q;i++){
          int index=-1,a=0;bool sol=true;
          scanf("%s",&query);
          int sz=strlen(query);
          for(int j=0;j<sz;j++){
              vector<int>::iterator cur=upper_bound(vvi[query[j]].begin(),vvi[query[j]].end(),index);
              index=cur-vvi[query[j]].begin();
              if(cur==vvi[query[j]].end()){sol=false;break;};
              index=vvi[query[j]][index];
              if(j==0)a=index;
            }    
      sol==true?printf("Matched %d %d\n",a,index):printf("Not matched\n");
    }

     
}
