//============================================================================
// Name        : FenwickTree.cpp
// Author      : Michael
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;
typedef vector<int>vi;
#define LSOne(a) (a&(-a))
class FenwickTree{
private:vi ft;
public:
FenwickTree(int n){
	ft.assign(n+1,0);
}
int rsq(int k){
	int sum=0;
   for(;k;k-=LSOne(k))sum+=ft[k];
   return sum;
}
int rsq(int a,int b){
	return rsq(b)-(a==1)?0:rsq(a-1);
}
void adjust(int k,int v){
  for(;k<(int)ft.size();k+=LSOne(k))ft[k]+=v;
}

};
int main() {
    printf("a7a\n");
	return 0;
}
