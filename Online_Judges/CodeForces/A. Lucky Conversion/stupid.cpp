#include<iostream>
using namespace std;
int i,k,p;
main(){
	string a,b;
	cin>>a>>b;
	for(i=0;i<a.size();i++){
            if(a[i]!=b[i]){
             if(a[i]=='4')k++;
             else p++;            
            }		
	}cout<<max(k,p);
}