/*
*     Idea : Just Iterate for all possible numbers that upper or equal the max and get the minimum value to get the optimal solution
*            Corner Case : if we take as max as we can there some number don't reach the target we should cnt how many onces can add to them 
*                          to reach the target value :)
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>

using namespace std;
const int N=105;
int a[N],b[N];
int main()
{

    freopen ("equal.in", "r", stdin);                                                                                              
    int n,m,ans=1e9;
    scanf("%d %d",&n,&m);
    int maxx=0;
    for(int i=0;i<n;++i){
        scanf("%d",b+i);
        a[i]=b[i];
        maxx=max(a[i],maxx);
    }
    for(int target=maxx;target<=(maxx+1000);target++){
     int cntr=0;
       for(int i=0;i<n;++i){
           if (a[i]!=target){
               int j=7;
               while(a[i]<target){
                   double p=pow(m,j);
                   if(p+a[i]<=target)
                   {
                       cntr++;
                       a[i]+=p;
                   }
                   else
                       j--;
               }
           }
        }
        for(int i=0;i<n;i++){
            if(a[i]<target){
             cntr+=(target-a[i]);
            }
            a[i]=b[i]; 
        }
        ans=min(ans,cntr);
     }
    cout<<ans<<endl;
}