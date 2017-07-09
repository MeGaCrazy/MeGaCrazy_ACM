#include <stdio.h>
#include <vector>
#include <string.h>
#include <utility>
#include <algorithm>
using namespace std;
const int N=1234567;
int arr[N],arr2[N];
typedef vector<pair<int,int> >vii;
vii tmp;
int main(){
   int n; 
   freopen("in2.txt","r",stdin);
   scanf("%d",&n);
   for(int i=0;i<n;i++){
     int a,b;
     scanf("%d ",&arr[i]);
      }
    for(int i=0;i<n;i++){
    scanf("%d",&arr2[i]);
    }
   for(int i=0;i<n;i++){
       tmp.push_back(make_pair(arr2[i],arr[i]));
   }
  sort(tmp.rbegin(),tmp.rend());
 for(int i=0;i<n;i++){
     int a,b;
     printf("%d ",tmp[i].second);
      
  }
printf("\n");
 for(int i=0;i<n;i++){

  printf("%d ",tmp[i].first);
  }


}
