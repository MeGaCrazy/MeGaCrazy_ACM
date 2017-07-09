#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>
#include <math.h>
using namespace std;
typedef pair<int,int>ii;
typedef vector<ii>vii;

int main(){

         // un solved 5rrrrrrrrrrrrrrrra
       int t,n;
        vii v;
           for(int i=0;i<5;i++)
               for(int j=0;j<5;j++)
             v.push_back(make_pair(i,j));
       freopen("in.txt","r",stdin);
       scanf("%d",&t);
         
       while(t--){
        	   scanf("%d",&n);
  	   int r,c,pop,o1,o2,o3,o4,o5,dis=2e9;      
          for(int i=0;i<n;i++){
             scanf("%d %d %d",&r,&c,&pop);
            
                 for(int j=0;j<21;j++)
                   for(int w=j+1;w<22;w++)
                     for(int x=w+1;x<23;x++)
                     	for(int y=x+1;y<24;y++)
                     	   for(int z=y+1;z<25;z++){
                     	   int sum=(abs(r-v[j].first)+abs(c-v[j].second))+
                     	                (abs(r-v[w].first)+abs(c-v[w].second))+
                     	                 (abs(r-v[x].first)+abs(c-v[x].second))+
                     	                  (abs(r-v[y].first)+abs(c-v[y].second))+
                     	                   (abs(r-v[z].first)+abs(c-v[z].second));
                     	         //        sum*=pop;
                     	           if(dis>sum){
                     	               dis=sum;
                     	               o1=v[j].first*5+v[j].second;
                     	               o2=v[w].first*5+v[w].second;
                     	               o1=v[x].first*5+v[x].second;
                     	               o1=v[y].first*5+v[y].second;
                     	               o1=v[z].first*5+v[z].second;
                     	           }

                              }
  
           }
                      printf("%d %d %d %d %d\n",o1,o2,o3,o4,o5);         
       
       }





 }