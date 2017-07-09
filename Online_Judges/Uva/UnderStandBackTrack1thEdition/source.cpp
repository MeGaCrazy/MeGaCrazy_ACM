#include <stdio.h>
#include <math.h>
using namespace std;
const int N=8;
int row[8],a,b;
bool place(int r,int c){
   for(int prev=0;prev<c;prev++){
     if(row[prev]==r||abs(row[prev]-r)==abs(prev-c))
        return false;
   }
   return true;

}                                                                               
void backtrack(int c){

 

 for(int r=0;r<8;r++){
   if(place(r,c)){
      row[c]=r;
     backtrack(c+1);
 }




}









int main(){







}