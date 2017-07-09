#include <stdio.h>
#include <math.h>
const double e=2.71828182845904523536;
#define EPS 1e-9
int p, q, r, s, t,u;
double mid;
bool equ(){
        double result=p*pow(e,-mid)+q*sin(mid)+r*cos(mid)+s*tan(mid)+t*pow(mid,2)+u;
        if(result>0)return false;
        return true;
}
int main(){
     freopen("in.txt","r",stdin);
   while(scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF){
        double ans,low=0.0000,hi=1.0000;
       while(fabs(hi-low)>EPS){
                mid=(hi+low)/2;
                if(equ()){ans=mid;hi=mid;}
               else low=mid;
         }
           if(equ()) printf("%.4f\n",ans);else printf("No solution\n");
    }
  
}